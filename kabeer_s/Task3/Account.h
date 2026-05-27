#ifndef ACCOUNT_H
#define ACCOUNT_H

/*
accountNumber	long	Unique account number
accountType	String	Savings/current
balance	double	Current balance
dateOpened	Date	Opening date
status	String	Active/blocked
branch	Branch	Linked branch
customer	Customer	Owner
transactions	List	Transaction history
*/

#include <string>
#include <list>
#include "Date.h"
#include "Branch.h"
#include "Bank.h"

class Customer;
class Transaction;
class ATMCard;

class Account{
    private:
    long accountNumber;
    std::string accountType;
    double balance;
    Date dateOpened;
    std::string status;
    Branch* branch;
    Customer* customer;
    std::list<Transaction *> transactionHistory;
    std::list<ATMCard *> ATMcards;

    static long numberOfAccounts;

    // operated by branch and child classes
    protected:
    Account();
    ~Account();
    void setStatus();
    void setBalance();
    void addCard();
    void removeCard();

    friend int Branch::addAccount();
    friend int Branch::removeAccount(int);
    friend int Branch::setAccountStatus();
    friend int Branch::setAccountBalance();
    friend int Branch::addCard();
    friend int Branch::removeCard();

    // operated by bank
    void addTransaction();
    friend int Bank::addTransaction();
    
    public:
    long getAccountNumber();
    std::string getAccountType();
    double getBalance();
    Date getDateOpened();
    std::string getStatus();
    Branch* getBranch();
    Customer* getCustomer();
    std::list<Transaction *> getTransactionHistory();
};

#endif