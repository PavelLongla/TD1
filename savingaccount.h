#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include "bankaccount.h"

class SavingAccount : public BankAccount {
    private :
    double rate_ ;

    public :
    SavingAccount( const std::string& owner, double rate);

    double rate() const ;
    void addInterest();
    void display() const ;
};

#endif