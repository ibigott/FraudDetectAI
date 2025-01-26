#include <iostream>
#include "bank.h"
#include "user.h"
#include "database.h"
#include <cstdlib>

int main() {
    Database db("/Users/ignatius/Desktop/FraudDetectAI/database/fraud.db");
    sqlite3* dbConnection = db.getConnection();
    if (!dbConnection) {return 1;}
    int option = 0;
    db.initialize("/Users/ignatius/Desktop/FraudDetectAI/database/schema.sql");
    while (true) {
        system("clear");
        std::cout << "============== FraudDetectAI ==============" << std::endl;
        std::cout << "1. Banks" << std::endl;
        std::cout << "2. Users" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "===========================================" << std::endl;
        std::cout << "Enter your choice (Must be a valid digit!):" << std::endl;
        std::cin >> option;
        if (option == 1) {Bank::Menu(dbConnection);}
        else if (option == 2) {User::Menu(dbConnection);}   
        else if (option == 3) {break;}   
    }
    sqlite3_close(dbConnection);
    return 0;
}