#ifndef BANK_H
#define BANK_H

#include "database.h"

class Bank {    
public:
    static void Menu(sqlite3* db);
    static void createBank(sqlite3* db);
    static void editBank(sqlite3* db);
    static void deleteBank(sqlite3* db);
    static void transactionHistory(sqlite3* db);
};

#endif