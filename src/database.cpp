#include "database.h"
#include <iostream>
#include <fstream>

Database::Database(const std::string& db_path) {
    int rc = sqlite3_open("/Users/ignatius/Desktop/FraudDetectAI/database/fraud.db", &db);
    if (rc) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
    } 
    else {
        std::cout << "Database connected successfully.\n";
        executeSchema("/Users/ignatius/Desktop/FraudDetectAI/database/schema.sql");
    }
}

Database::~Database() {
    sqlite3_close(db);
}

void Database::executeSchema(const std::string& schema_path) {
    std::ifstream schema_file(schema_path);
    if (!schema_file) {
        std::cerr << "Error: Could not open schema file.\n";
        return;
    }
    std::string sql((std::istreambuf_iterator<char>(schema_file)), std::istreambuf_iterator<char>());
    char* errMsg = nullptr;
    int rc = sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error executing schema: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    } 
    else {
        std::cout << "Database schema initialized successfully.\n" << std::endl;
    }
}
