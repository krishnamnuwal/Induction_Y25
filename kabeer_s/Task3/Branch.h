#ifndef BRANCH_H
#define BRANCH_H

#include <string>
#include <list>

class Employee;
class Account;

class Branch{
    private:
    int branchId;
    std::string branchName;
    std::string IFSCCode;
    std::string address;
    std::list<Account *> accounts;
    std::list<Employee *> employees;

    static int total_branch_count;

    public:
    Branch(std::string name, std::string code, std::string address);  // generate unqiue id from statis variable;

    int getId();
    std::string getName();
    std::string getIFSCCode();
    std::string getAddress();

    int addEmployee(); // returns unique id assigned
    int removeEmployee(int id); // returns success code
    
    int addAccount();
    int removeAccount(int id);
    int setAccountStatus();
    int setAccountBalance();
    int addCard();
    int removeCard();
};

#endif