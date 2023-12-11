#include <iostream>
using namespace std;

class Employee
{

public:
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[20];
    int emp_salary;
    char emp_city[20];
    int emp_experience;
    char emp_company_name[50];
};

int main()
{
    Employee emp1;
    Employee emp2;
    Employee emp3;
    Employee emp4;
    Employee emp5;

    cout << "Enter Employee ID:";
    cin >> emp1.emp_id;
    fflush(stdin);
    cout << "Enter Employee Name:";
    gets(emp1.emp_name);
    cout << "Enter Employee Age:";
    cin >> emp1.emp_age;
    fflush(stdin);
    cout << "Enter Employee Role:";
    gets(emp1.emp_role);
    cout << "Enter Employee Salary:";
    cin >> emp1.emp_salary;
    fflush(stdin);
    cout << "Enter Employee City:";
    gets(emp1.emp_city);
    cout << "Enter Employee Experience(in years):";
    cin >> emp1.emp_experience;
    fflush(stdin);
    cout << "Enter Company Name:";
    gets(emp1.emp_company_name);
    cout << endl;

    cout << "Enter Employee ID:";
    cin >> emp2.emp_id;
    fflush(stdin);
    cout << "Enter Employee Name:";
    gets(emp2.emp_name);
    cout << "Enter Employee Age:";
    cin >> emp2.emp_age;
    fflush(stdin);
    cout << "Enter Employee Role:";
    gets(emp2.emp_role);
    cout << "Enter Employee Salary:";
    cin >> emp2.emp_salary;
    fflush(stdin);
    cout << "Enter Employee City:";
    gets(emp2.emp_city);
    cout << "Enter Employee Experience(in years):";
    cin >> emp2.emp_experience;
    fflush(stdin);
    cout << "Enter Company Name:";
    gets(emp2.emp_company_name);
    cout << endl;

    cout << "Enter Employee ID:";
    cin >> emp3.emp_id;
    fflush(stdin);
    cout << "Enter Employee Name:";
    gets(emp3.emp_name);
    cout << "Enter Employee Age:";
    cin >> emp3.emp_age;
    fflush(stdin);
    cout << "Enter Employee Role:";
    gets(emp3.emp_role);
    cout << "Enter Employee Salary:";
    cin >> emp3.emp_salary;
    fflush(stdin);
    cout << "Enter Employee City:";
    gets(emp3.emp_city);
    cout << "Enter Employee Experience(in years):";
    cin >> emp3.emp_experience;
    fflush(stdin);
    cout << "Enter Company Name:";
    gets(emp3.emp_company_name);
    cout << endl;

    cout << "Enter Employee ID:";
    cin >> emp4.emp_id;
    fflush(stdin);
    cout << "Enter Employee Name:";
    gets(emp4.emp_name);
    cout << "Enter Employee Age:";
    cin >> emp4.emp_age;
    fflush(stdin);
    cout << "Enter Employee Role:";
    gets(emp4.emp_role);
    cout << "Enter Employee Salary:";
    cin >> emp4.emp_salary;
    fflush(stdin);
    cout << "Enter Employee City:";
    gets(emp4.emp_city);
    cout << "Enter Employee Experience(in years):";
    cin >> emp4.emp_experience;
    fflush(stdin);
    cout << "Enter Company Name:";
    gets(emp4.emp_company_name);
    cout << endl;

    cout << "Enter Employee ID:";
    cin >> emp5.emp_id;
    fflush(stdin);
    cout << "Enter Employee Name:";
    gets(emp5.emp_name);
    cout << "Enter Employee Age:";
    cin >> emp5.emp_age;
    fflush(stdin);
    cout << "Enter Employee Role:";
    gets(emp5.emp_role);
    cout << "Enter Employee Salary:";
    cin >> emp5.emp_salary;
    fflush(stdin);
    cout << "Enter Employee City:";
    gets(emp5.emp_city);
    cout << "Enter Employee Experience(in years):";
    cin >> emp5.emp_experience;
    fflush(stdin);
    cout << "Enter Company Name:";
    gets(emp5.emp_company_name);
    cout << endl;
    
    cout << "---: Empoloyee Data :---" << endl;

    cout << "ID: " << emp1.emp_id << endl;
    cout << "Name: " << emp1.emp_name << endl;
    cout << "Age: " << emp1.emp_age << endl;
    cout << "Role: " << emp1.emp_role << endl;
    cout << "Salary: " << emp1.emp_salary << endl;
    cout << "City: " << emp1.emp_city << endl;
    cout << "Experience: " << emp1.emp_experience <<" years" << endl;
    cout << "Company: " << emp1.emp_company_name << endl;
    cout << endl;

    cout << "ID: " << emp2.emp_id << endl;
    cout << "Name: " << emp2.emp_name << endl;
    cout << "Age: " << emp2.emp_age << endl;
    cout << "Role: " << emp2.emp_role << endl;
    cout << "Salary: " << emp2.emp_salary << endl;
    cout << "City: " << emp2.emp_city << endl;
    cout << "Experience: " << emp2.emp_experience <<" years" << endl;
    cout << "Company: " << emp2.emp_company_name << endl;
    cout << endl;

    cout << "ID: " << emp3.emp_id << endl;
    cout << "Name: " << emp3.emp_name << endl;
    cout << "Age: " << emp3.emp_age << endl;
    cout << "Role: " << emp3.emp_role << endl;
    cout << "Salary: " << emp3.emp_salary << endl;
    cout << "City: " << emp3.emp_city << endl;
    cout << "Experience: " << emp3.emp_experience <<" years" << endl;
    cout << "Company: " << emp3.emp_company_name << endl;
    cout << endl;

    cout << "ID: " << emp4.emp_id << endl;
    cout << "Name: " << emp4.emp_name << endl;
    cout << "Age: " << emp4.emp_age << endl;
    cout << "Role: " << emp4.emp_role << endl;
    cout << "Salary: " << emp4.emp_salary << endl;
    cout << "City: " << emp4.emp_city << endl;
    cout << "Experience: " << emp4.emp_experience <<" years" << endl;
    cout << "Company: " << emp4.emp_company_name << endl;
    cout << endl;

    cout << "ID: " << emp5.emp_id << endl;
    cout << "Name: " << emp5.emp_name << endl;
    cout << "Age: " << emp5.emp_age << endl;
    cout << "Role: " << emp5.emp_role << endl;
    cout << "Salary: " << emp5.emp_salary << endl;
    cout << "City: " << emp5.emp_city << endl;
    cout << "Experience: " << emp5.emp_experience <<" years" << endl;
    cout << "Company: " << emp5.emp_company_name << endl;
    cout << endl;

    return 0;
}