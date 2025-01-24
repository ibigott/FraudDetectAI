#include <iostream>
#include "bank.h"
#include "database.h"

using namespace std;

int main() {
    int option = 0;
    
    Database db("database/fraud.db");
    
    while (true) {
        cout << endl << "===== FraudDetectAI Banking System =====" << endl;
        cout << "1. Create a New Bank" << endl;
        cout << "2. Create a New User" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Transfer Money" << endl;
        cout << "6. View Transaction History" << endl;
        cout << "7. Detect Fraud" << endl;
        cout << "8. Exit" << endl;
        cout << "=======================================" << endl;
        cout << "Enter your choice (Must be a valid digit!):" << endl;
    
        cin >> option;

        if (option == 1) {
            
        }
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
        else {cout << "Please enter a valid digit!" << endl;}
    }
 
    return 0;
}