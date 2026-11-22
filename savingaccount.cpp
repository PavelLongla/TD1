#include "savingaccount.h"
#include <iostream>

SavingAccount::SavingAccount(const std::string& owner, double rate):BankAccount(owner),rate_(rate){
    if (rate_ < 0){
        rate_ = 0;
    }
}

double SavingAccount::rate() const { return rate_ ; }

void SavingAccount::addInterest() {
    deposit(balance()*rate_/100);
}

void SavingAccount::display() const {
    BankAccount::display();
    std::cout<<"  COMPTE EPARGNE"<<std::endl;
    std::cout<<"  Taux d interet : "<<rate_<<" %"<<std::endl;
    std::cout<<"=============================================================="<<std::endl;
}