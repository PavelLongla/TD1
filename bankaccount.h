#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

//#include "client.h"

class BankAccount {
    private :
        std::string owner_ ;
        double balance_ ;
        int transactions_ ;

    public :
        BankAccount(const std::string& owner);

        std::string owner() const;
        double balance() const;
        int transactions() const;

        bool deposit(double amount);
        bool withDrawal(double amount);
        bool transfert(BankAccount& destination, double amount);
        void display() const;

};

#endif