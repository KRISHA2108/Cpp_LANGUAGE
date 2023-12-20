#include<iostream>
#include<string.h>
using namespace std;

class A
{
    protected:
    int id;
    char name[20];
    char role[20];
    int salary;
    char experience[10];
    char cmp_name[50];
    char address[50];
    char email[50];
    int  contact;

    public:
    void Ainput()
    {
        cout << "Enter your Id:";
        cin >> id;
        fflush(stdin);
        cout << "Enter your Name:";
        gets(name);
        fflush(stdin);
        cout << "Enter your Role:";
        gets(role);
    }
};
class B: public A
{
    public:
    void Binput()
    {
        cout << "Enter your Salary:";
        cin >> salary;
        fflush(stdin);
        cout << "Enter your Experience:";
        gets(experience);
    }

};
class C: public B
{
    public:
    void Cinput()
    {
        cout << "Enter your Company name:";
        gets(cmp_name);
        fflush(stdin);
        cout << "Enter your Address:";
        gets(address);
    }
    void output()
    {
        cout << "NAME:" << name<< endl;
        cout << "ROLE:" <<role << endl;
        cout << "SALARY:" << salary << endl;
    }

};

class D: public C
{
    public:
    void Dinput()
    {
    cout << "Enter your Email:";
    gets(email);
    cout << "Enter your Contact:";
    cin >> contact;
    }

    void getdata()
    {
        cout << "ID : " << id << endl;
        cout << "NAME : " << name << endl;
        cout << "ROLE : " << role << endl;
        cout << "SALARY : " << salary << endl;
        cout << "EXPERIENCE : " << experience << endl;
        cout << "COMPANY NAME : " << cmp_name << endl;
        cout << "ADDRESS : " << address << endl;
        cout << "EMAIL : " << email << endl;
        cout << "CONTACT : " << contact << endl;

        
    }

    
};
int main()
{
    D d1;

    d1.Ainput();
    d1.Binput();
    d1.Cinput();
    d1.output();
    d1.Dinput();
    d1.getdata();
   
}
