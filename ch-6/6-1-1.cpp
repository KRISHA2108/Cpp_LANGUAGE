#include <iostream>
#include<string.h>
using namespace std;

class Admin
{
    private:
        int total_annual_revenue;
    protected:
        int manager_salary;
        int total_staff;
    public:
         int employee_salary;
         char company_name[20];

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
        cout << "Enter employee salary:";
        cin >> employee_salary;
        
        cout << "Enter company name:";
        cin >> company_name;
    }
}; 

class Employee : public Manager
{
    void MyAcess()
    {
        cin >> emp_salary;
        cin >> cmp_name;
    }
};

int main()
{
    Manager m1;
    Employee e1;

    m1.Manager1();
}
