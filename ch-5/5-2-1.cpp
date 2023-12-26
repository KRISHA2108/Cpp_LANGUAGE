#include<iostream>
using namespace std;

class A
{
public:
    int a;
    
    void setA()
    {
        cout << "Enter Any Number:";
        cin >> a;
    }
    
    bool operator<(A n2)
    {
        if(this->a < n2.a)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};

int main()
{
    A a1,a2;
    
    a1.setA();
    a2.setA();

    cout << endl << "---:ANSWER:---" << endl;
    
    if(a1 < a2)
    {
        cout << endl << "A2 is greter";
    }
    else
    {
        cout << endl << "A1 is greter";
    }
    
    return 0;
}