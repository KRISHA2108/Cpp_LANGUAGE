#include<iostream>
using namespace std;

class RBI
{
    protected :
    
    int put;
    int get;
    int ROI=40;
    
    public :
    
    void input()
    {
        cout << "Enter your Investment:";
        cin >> put;
    }
    
};

class SBI : public RBI
{
    public:
    
    void getRoi()
    {
        get=((float)ROI/100)*put;
        cout << "Profit :" << get;
        cout << "Total :" << get+put;
    }
};

class BOB : public RBI
{
    public:
    
    void getRoi()
    {
        get=((float)ROI/100)*put;
        cout << "Profit :" << get;
        cout << "Total :" << get+put;
    }
};

class ICICI : public RBI
{
    public:
    
    void getRoi()
    {
        get=((float)ROI/100)*put;
        cout << "Profit :" << get;
        cout << "Total :" << get+put;
    }
};
int main()
{
    SBI s1;
    BOB b1;
    ICICI i1;
    int str;
    
    cout << "Enter your bank name(like 1,2 and 3):" << endl << "\t1) SBI" << endl << "\t2) BOB" << endl << "\t3) ICICI";
    cin >> str;
    
    if(str==1)
    {
        s1.input();
        s1.getRoi();
    }    
    else if(str==2)
    {
        b1.input();
        b1.getRoi();
    }
    else if(str==3)
    {
        i1.input();
        i1.getRoi();
    }
    else
    {
        cout << "invalid input";
    }
    
    return 0;
}