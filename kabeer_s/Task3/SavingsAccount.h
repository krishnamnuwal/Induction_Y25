#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"
#include "Branch.h"

class SavingsAccount: public Account{
    private:
    double interest;
    double minimumBalance;
    SavingsAccount(int id, double bal, double rate) : Account(), minimumBalance(bal), interest(rate){
        // idk but you can do something here
    };

    friend int Branch::addAccount();
    friend int Branch::removeAccount(int);
};

#endif