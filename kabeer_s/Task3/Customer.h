#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "Date.h"
#include <list>
#include "Branch.h"
#include "Bank.h"

class Account;
class Loan;

class Customer{
    private:
    int customerId;
    std::string fullName;
    Date dob;
    std::string gender;
    std::string mobileNumber;
    std::string email;
    std::string address;
    std::string aadhaarNumber;
    std::string PANNumber;
    std::list<Account *> accounts;
    std::list<Loan *> loans;

    static int totalCustomerCount;

    // operated by branch only
    void addAccount();
    int removeAccount(int id);

    friend int Branch::addAccount();
    friend int Branch::removeAccount(int);

    // operated by bank only
    Customer(
        std::string fullName, 
        Date dob, 
        std::string gender, 
        std::string mobileNumber,
        std::string email, 
        std::string address, 
        std::string aadhaarNumber, 
        std::string PANNumber
    );
    ~Customer();
    int addLoan();
    int removeLoan(int id);

    friend int Bank::addCustomer();
    friend int Bank::removeCustomer(int id);
    friend int Bank::addLoan();
    friend int Bank::removeLoan();

    public:
    std::string getName();
    Date getDob();
    std::string getGender();
    std::string getMobileNumber();
    std::string getEmail();
    std::string getAddress();
    std::string getAadhaarNumber();
    std::string getPANNumber();
};

#endif