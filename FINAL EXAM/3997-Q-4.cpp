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
    void SetBdata()
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
    void SetCdata()
    {
        cout << "Enter the value for 'C': ";
        cin >> c;
    }
};

class D : public B, public C
{
    public:
    int d;
    void SetDData()
    {
        cout << "Enter the value for 'D': ";
        cin >> d;
    }
     void sum()
    {
        cout << "A + B + C + D = " << B::a+b+c+d;
    }

};

int main()
{
    D d1;
    d1.SetBdata();
    d1.SetCdata();
    d1.SetDData();
    d1.sum();
}
