#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>
#include <string>

class Database {
public:
    Database(const std::string& db_path);
    ~Database();

private:
    sqlite3* db;
    void executeSchema(const std::string& schema_path);
};

#endif