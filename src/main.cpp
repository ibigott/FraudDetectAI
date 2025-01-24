#include <iostream>
#include "bank.h"
#include "database.h"

int main() {
    Database db("/Users/ignatius/Desktop/FraudDetectAI/database/fraud.db");
    sqlite3* dbConnection = db.getConnection();
    if (!dbConnection) {return 1;}
    int option = 0;
    while (true) {
        std::cout << std::endl << "===== FraudDetectAI Banking System =====" << std::endl;
        std::cout << "1. Create a New Bank" << std::endl;
        std::cout << "2. Create a New User" << std::endl;
        std::cout << "3. Deposit Money" << std::endl;
        std::cout << "4. Withdraw Money" << std::endl;
        std::cout << "5. Transfer Money" << std::endl;
        std::cout << "6. View Transaction History" << std::endl;
        std::cout << "7. Detect Fraud" << std::endl;
        std::cout << "8. Exit" << std::endl;
        std::cout << "=======================================" << std::endl;
        std::cout << "Enter your choice (Must be a valid digit!):" << std::endl;
        std::cin >> option;
        if (option == 1) {Bank::createBank(dbConnection);}
        else if (option == 2) {

        }
        else if (option == 3) {

        }
        else if (option == 4) {

        }
        else if (option == 5) {

        }
        else if (option == 6) {

        }
        else if (option == 7) {

        }
        else if (option == 8) {break;}
        else {std::cout << "Please enter a valid digit!" << std::endl;}
    }
    sqlite3_close(dbConnection);
    return 0;
}