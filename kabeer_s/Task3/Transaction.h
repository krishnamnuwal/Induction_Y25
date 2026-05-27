#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include "Date.h"
#include "Bank.h"

class Account;

class Transaction{
    private:
    int transactionId;
    std::string transactionType;
    double amount;
    Date transactionDate;
    Account *senderAccount;
    Account *receiverAccount;
    std::string status;
    
    static int numberOfTransactions;

    Transaction();
    ~Transaction();
    void editStatus();

    friend int Bank::addTransaction();
    friend void Bank::editTransactionStatus();

    public:
    std::string getTransactionType();
    double getAmount();
    Date getTransactionDate();
    Account *getSenderAccount();
    Account *getReceiverAccount();
    std::string getStatus();
};

#endif