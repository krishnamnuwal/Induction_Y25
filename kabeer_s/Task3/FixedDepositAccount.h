#ifndef FIXEDDEPOSITACCOUNT_H
#define FIXEDDEPOSITACCOUNT_H

#include "Account.h"
#include "Date.h"
#include "Branch.h"

class FixedDepositAccount: public Account{
    private:
    double FDAmount;
    Date maturityDate;
    double FDInterestRate;
    int tenureMonths;

    FixedDepositAccount(int id, double limit, Date name) : Account(), FDAmount(limit), maturityDate(name){
        // idk but you can do something here
    };

    friend int Branch::addAccount();
    friend int Branch::removeAccount(int);
};

#endif