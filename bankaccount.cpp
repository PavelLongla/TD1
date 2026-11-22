#include "bankaccount.h"
#include <iostream>

BankAccount::BankAccount(const std::string& owner): owner_(owner), balance_(0.0), transactions_(0){
    if(owner_.empty()){
        owner_="Inconnue";
    }
}

std::string BankAccount::owner() const { return owner_ ;}
double BankAccount::balance() const { return balance_ ;}
int BankAccount::transactions() const { return transactions_ ;}

bool BankAccount::deposit(double amount){
    if (amount <= 0){
        return false;
    }
    
    balance_+= amount;
    transactions_ ++ ;
    return true;
    
}

bool BankAccount::withDrawal(double amount){
    if (amount <= 0 || balance_ < amount){
        return false;
    }

    balance_-= amount ;
    transactions_ ++ ;
    return true ;
    
}

bool BankAccount::transfert(BankAccount& destination, double amount){
    if (amount <=0 || &destination == this){
        return false ;
    }

    withDrawal(amount);
    destination.deposit(amount);
    return true;
}

void BankAccount::display() const {
    std::cout<<"=============================================================="<<std::endl;
    std::cout<<"  RELEVE DE COMPTE "<<std::endl;
    std::cout<<"  Nom : "<<owner_<<std::endl;
    std::cout<<"  Solde : "<<balance_<<" euro"<<std::endl;
    std::cout<<"  transactions : "<<transactions_<<std::endl;
    std::cout<<"=============================================================="<<std::endl;
}