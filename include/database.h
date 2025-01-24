#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>
#include <string>

class Database {
    sqlite3* db;
public:
    Database(const std::string& dbPath);
    ~Database();
    sqlite3* getConnection();
    void initialize(const std::string& schemaPath);
};

#endif