#ifndef USER_H
#define USER_H

#include "database.h"

class User {
public:
    static void Menu(sqlite3* db);
    static void createUser(sqlite3* db);
    static void editUser(sqlite3* db);
    static void deleteUser(sqlite3* db);
    static void selectUser(sqlite3* db);
    static void viewAllUsers(sqlite3* db);
    static void transactionHistory(sqlite3* db);
};

#endif