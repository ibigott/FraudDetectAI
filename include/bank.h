#ifndef BANK_H
#define BANK_H

#include <string>

using namespace std;

class Bank {    
    public:
        Bank();
        ~Bank();
        int getId();
        void setId(int id);
        string getName();
        void setName(string name);
        string getLocation();
        void setLocation(string location);
};

#endif