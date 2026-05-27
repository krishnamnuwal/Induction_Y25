#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include "Account.h"
#include "Branch.h"

class CurrentAccount: public Account{
    private:
    double overdraftLimit;
    std::string businessName;
    CurrentAccount(int id, double limit, std::string name) : Account(), overdraftLimit(limit), businessName(name){
        // idk but you can do something here
    };

    friend int Branch::addAccount();
    friend int Branch::removeAccount(int);
};

#endif