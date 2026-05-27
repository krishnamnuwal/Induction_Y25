#ifndef BANK_H
#define BANK_H

#include <string>
#include <list>

class Branch;
class Customer;
class Employee;

class Bank {
    private:
    int bankId;
    std::string bankName;
    std::list<Branch *> branches;
    std::list<Customer * > customers;
    std::list<Employee *> employees;

    public:
    Bank(int id, std::string name);
    int addEmployee(); // returns unique id assigned
    int removeEmployee(int id); // returns success code
    int addCustomer();
    int removeCustomer(int id);
    int addBranch(std::string name, std::string code, std::string address);
    int removeBranch(int id);
    int getId();

    int addLoan();
    int removeLoan();
    void editLoanStatus();

    int addTransaction();
    void editTransactionStatus();
    
    std::string getName();
};

#endif