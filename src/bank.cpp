#include "bank.h"
#include "database.h"
#include <iostream>
#include <cstdlib>

void Bank::Menu(sqlite3 *db) {
    system("clear");
    std::cin.get();
    int option = 0;
    std::cout << "================ Bank Menu ================" << std::endl;
    std::cout << "1. Create Bank" << std::endl;
    std::cout << "2. Edit Bank" << std::endl;
    std::cout << "3. Delete Bank" << std::endl;
    std::cout << "4. Transaction History" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "===========================================" << std::endl;
    std::cout << "Enter your choice (Must be a valid digit!):" << std::endl;
    std::cin >> option;
    if (option == 1) {createBank(db);}
    else if (option == 2) {editBank(db);}   
    else if (option == 3) {deleteBank(db);}   
    else if (option == 4) {transactionHistory(db);}
    else if (option == 5) {system("clear");}
    else {Menu(db);}
}

void Bank::createBank(sqlite3 *db) {
    system("clear");
    std::cin.get();
    int option = 0;
    std::cout << "=============== Create Bank ===============" << std::endl;
    std::cout << "1. Manual" << std::endl;
    std::cout << "2. Automatic (Simulated with AI)" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "===========================================" << std::endl;
    std::cout << "Enter your choice (Must be a valid digit!):" << std::endl;
    std::cin >> option;
    if (option == 1) {

    }
    else if (option == 2) {
        
    }   
    else if (option == 3) {Menu(db);}   
    else {createBank(db);}

    /*

    char* errMsg = 0;
    const char* sql = "INSERT INTO banks (id, name, location, swiftCode, dateCreated) VALUES (1, 'Bank of Example', 'Example City', 'EX123456', '2023-10-01');";
    int rc = sqlite3_exec(db, sql, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        createBank(db);
    }
    else {std::cout << "New bank created successfully" << std::endl;}
    
    */
}

void Bank::editBank(sqlite3 *db) {

}

void Bank::deleteBank(sqlite3 *db) {

}

void Bank::transactionHistory(sqlite3 *db) {

}
