#ifndef ATMCARD_H
#define ATMCARD_H

#include "Date.h"
#include <string>
#include "Branch.h"

class Account;

class ATMCard{
    private:
    long cardNumber;
    int CVV;
    Date expiryDate;
    int PIN;
    std::string cardType;
    std::string cardStatus;
    Account *linkedAccount;

    static int numberOfCards;

    // managed by branch which owns the account
    ATMCard();
    ~ATMCard();

    friend int Branch::addCard();
    friend int Branch::removeCard();

    public:
    long getCardNumber() const;
    std::string getCardType() const;
    std::string getCardStatus() const;
    Date getExpiryDate() const;
    Account* getLinkedAccount() const;
    
    bool verifyPIN(int inputPIN) const;
    void blockCard();
};

#endif