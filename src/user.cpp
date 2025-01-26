#include "user.h"
#include "database.h"
#include <iostream>
#include <cstdlib>

void User::Menu(sqlite3 *db) {
    system("clear");
    std::cin.get();
    int option = 0;
    std::cout << "================ User Menu ================" << std::endl;
    std::cout << "1. Create User" << std::endl;
    std::cout << "2. Edit User" << std::endl;
    std::cout << "3. Delete User" << std::endl;
    std::cout << "4. Select User" << std::endl;
    std::cout << "5. View All Users" << std::endl;
    std::cout << "6. Exit" << std::endl;
    std::cout << "===========================================" << std::endl;
    std::cout << "Enter your choice (Must be a valid digit!):" << std::endl;
    std::cin >> option;
    if (option == 1) {createUser(db);}
    else if (option == 2) {editUser(db);}   
    else if (option == 3) {deleteUser(db);}   
    else if (option == 4) {selectUser(db);}
    else if (option == 5) {viewAllUsers(db);}
    else if (option == 6) {system("clear");}
    else {Menu(db);}
}

void User::createUser(sqlite3 *db) {

}

void User::editUser(sqlite3 *db) {

}

void User::deleteUser(sqlite3 *db) {

}

void User::selectUser(sqlite3 *db) {

}

void User::viewAllUsers(sqlite3 *db) {

}

void User::transactionHistory(sqlite3 *db) {

}