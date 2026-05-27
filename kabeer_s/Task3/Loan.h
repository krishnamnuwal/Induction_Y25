#ifndef LOAN_H
#define LOAN_H

#include <string>
#include "Date.h"
#include "Bank.h"

class Customer;

class Loan{
    private:
    int loanId;
    std::string loanType;
    double loanAmount;
    double interestRate;
    int tenureYears;
    double EMIAmount;
    Customer *customer;
    std::string loanStatus;
    
    static int numberOfLoans;

    Loan();
    ~Loan();

    friend int Bank::addLoan();
    friend int Bank::removeLoan();
    friend void Bank::editLoanStatus();

    public:

    std::string getLoanType();
    double getLoanAmount();
    double getInterestRate();
    int getTenureYears();
    double getEMIAmount();
    Customer *getCustomer();
    std::string getLoanStatus();
};

#endif