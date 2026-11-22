#include "savingaccount.h"

int main()
{
    BankAccount ariel("Ariel");
    ariel.display();

    ariel.deposit(1000);
    ariel.deposit(0);
    ariel.deposit(-400);

    ariel.display();

    ariel.withDrawal(400);
    ariel.withDrawal(1000);
    ariel.withDrawal(-80);

    ariel.display();

    SavingAccount arielS("arielS",2.0);
    arielS.deposit(1000);
    arielS.addInterest();
    arielS.display();

    ariel.transfert(arielS,300.0);
    arielS.display();
    ariel.display();
 
    return 0;

}