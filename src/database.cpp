#include "database.h"
#include <iostream>
#include <fstream>
#include <sstream>

Database::Database(const std::string& dbPath) {
    int rc = sqlite3_open(dbPath.c_str(), &db);
    if (rc) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        db = nullptr;
    } 
    else {std::cout << "Database opened successfully: " << dbPath << std::endl;}
}

Database::~Database() {
    if (db) {sqlite3_close(db);}
}

sqlite3* Database::getConnection() {
    return db;
}

void Database::initialize(const std::string& schemaPath) {
    std::ifstream schemaFile(schemaPath);
    if (!schemaFile) {
        std::cerr << "Failed to open schema file: " << schemaPath << std::endl;
        return;
    }
    std::stringstream buffer;
    buffer << schemaFile.rdbuf();
    std::string schemaSQL = buffer.str();
    char* errMsg = nullptr;
    int rc = sqlite3_exec(db, schemaSQL.c_str(), nullptr, nullptr, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Failed to execute schema SQL: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    } 
    else {std::cout << "Database initialized successfully with schema." << std::endl;}
}