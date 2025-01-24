#include "bank.h"
#include "database.h"
#include <iostream>

void Bank::createBank(sqlite3* db) {
    char* errMsg = 0;
    int rc;
    const char* sql = "INSERT INTO banks (name) VALUES ('New Bank');";
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    }
    else {std::cout << "New bank created successfully" << std::endl;}
}