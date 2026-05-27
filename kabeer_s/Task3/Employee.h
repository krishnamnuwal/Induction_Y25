#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Branch.h"

class Employee{
    private:
    int employeeId;
    std::string fullName;
    std::string designation;
    double salary;

    static int totalEmployeeCount;

    // operated by branch only
    Employee(
        int employeeId,
        std::string fullName,
        std::string designation,
        double salary
    );
    ~Employee();

    friend int Branch::addEmployee();
    friend int Branch::removeEmployee(int id);

    public:
    int getEmployeeId();
    std::string getName();
    std::string getDesignation();
    double getSalary();
};

#endif