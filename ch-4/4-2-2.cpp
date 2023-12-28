#include<iostream>
#include<string.h>
using namespace std;

class A 
{
    public:
    int a;
};

class B : public A
{
    public:
    int  b;
    void setBdata()
    {
        cout << "Enter the value for 'A': ";
        cin >> a;
        cout << "Enter the value for 'B': ";
        cin >> b;
    }
};

class C : public A
{
    public:
    int c;
    void setCdata()
    {
        cout << "Enter the value for 'C': ";
        cin >> c;
    }
};

class D : public B, public C
{
    public:
    int d;
    void setDData()
    {
        cout << "Enter the value for 'D': ";
        cin >> d;
    }
     void sum()
    {
        cout << "A + B + C + D = "<< B::a+b+c+d;
    }

};

int main()
{
    D d1;
    d1.setBdata();
    d1.setCdata();
    d1.setDData();
    d1.sum();
}