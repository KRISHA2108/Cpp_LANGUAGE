#include <iostream>
#include <string.h>
using namespace std;

class Admin
{
    protected :
            char company_name[20];
            int manager_salary;
            int employee_salary;
            int total_staff;
            int total_annual_revenue;
};

class Manager : public Admin
{
    void setdata()
    {
        cout << "Enter the name of your company: ";
        gets(company_name);
        cout << "Enter the salary of the manager: ";
        cin >> manager_salary;
        cout << "Enter the salary of the employee:";
        cin >> employee_salary;
        cout << "Enter the company total staff:";
        cin >> total_staff;
        cout << "Enter the company total annual revenue:";
        cin >> total_annual_revenue;
    }
};
class Employee : public Admin  
{
    
};