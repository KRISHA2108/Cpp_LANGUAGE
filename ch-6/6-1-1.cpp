#include <iostream>
#include <string.h>
using namespace std;

class Admin
{
    protected:
    char company_name[20];
    int manager_salary;
    int employee_salary;
    int total_staff;
    int total_annual_revenue;
};

class Manager : private Admin
{
    void MyAcess()
    {
        cin >> manager_salary;
        cin >> total_staff;
    }

public:
    int emp_salary;
    char cmp_name[20];

    void Manager1()
    {
        cout << "Enter Employee Salary:";
        cin >> employee_salary;
        fflush(stdin);
        cout << "Enter Company Name:";
        gets(this->company_name);
    }
};

class Employee : public Manager
{
    void MyAcess()
    {
        cin >> emp_salary;
        cin >> cmp_name;
    }

    public:
    int emp_salary;
    char cmp_name[20];

    void employee()
    {
        
        cout << "Enter Employee Salary:";
        cin >> emp_salary;
        fflush(stdin);
        cout << "Enter Company Name:";
        gets(this->cmp_name);;
    }
};

int main()
{
    Manager m1;
    Employee e1;

    m1.Manager1();
    e1.employee();
}
