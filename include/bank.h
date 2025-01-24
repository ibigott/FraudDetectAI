#ifndef BANK_H
#define BANK_H

#include <string>
#include "database.h"

class Bank {    
public:
    static void createBank(sqlite3* db);
};

#endif