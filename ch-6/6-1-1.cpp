#include <iostream>
#include <string.h>
using namespace std;

class Admin
{
    private:
    int total_annual_revenue;
    protected:
    string company_name;
    int manager_salary;
    int employee_salary;
    int total_staff;
public:
    void setcompData()
    {
        cout << "Enter company Name:";
        cin >> company_name;
        cout << "\nEnter Manager Salary:";
        cin >> manager_salary;
        cout << "Enter Employee Salary: ";
        cin >> employee_salary;
        cout << "Enter the company total staff:";
        cin >> total_staff;
        cout << "Enter the total annual revenue:";
        cin >> total_annual_revenue;
    }

    void getcompdata()
    {
        cout << "----:ADMIN DATA:----"<< endl;
        cout << "\nCompany name:" << company_name << endl;
        cout << "\nManager Salary:" << manager_salary << endl;
        cout << "\nEmployee Salary:" << employee_salary << endl;
        cout << "\nTotal Staff:" << total_staff << endl;
        cout << "\nAnnual Revenue:" << total_annual_revenue << endl << endl;
    }
};

class Manager : public Admin
{

public:
    void getDataManager()
    {
        cout << "----:MANAGER DATA:----"<< endl;
        cout << "\nCompany name:" << company_name << endl;
        cout << "\nManager Salary:" << manager_salary << endl;
        cout << "\nEmployee Salary:" << employee_salary << endl;
        cout << "\nTotal Staff:" << total_staff << endl;

        manager_salary = 0;
        total_staff = 0;
    }

};

class Employee : public Manager
{
    public:
   void myAccess()
   {
    cout << endl;
     cout << "----:EMPLOYEE DATA:----"<< endl;
     cout << "\nEmployee Salary:" << employee_salary << endl;
      cout << "\nCompany name:" << Admin                                                                                                                                                                                                                                ::company_name << endl;
   }
};

int main()
{
   
    Employee e1;

    e1.setcompData();
    e1.getcompdata();

    e1.getDataManager();

    e1.myAccess();
}
