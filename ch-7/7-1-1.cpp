#include<iostream>
using namespace std;

class division
{
    private:
    int a;
    int b;

    string e = "ERROR";
    public:

    division()
    {
        cout << "Enter the A:";
        cin >> a;
        cout << "Enter the B:";
        cin >> b;
        cout << endl;

        try
        {
            if(b==0 || a==0)
            {
                throw e;
            }
            else
            {
                throw (double)a/b;
             }
        }
            catch(string e)
            {
                cout << e ;
            }
            catch(int e)
            {
                cout << "a / b :" << e << endl;
            }
            catch(double e)
            {
                cout << "a / b :" << e << endl;
            }
            catch(...)
            {
                cout << "General Exception" << endl ;
            }
            cout << endl;
    }
};

class voting
{
    int age;
    string a = "you can't vote !!";
    public:

    voting()
    {
        cout << "Enter your age:";
        cin >> age;

        try
        {
            if(age<18)
            {
                throw a;
            }
            else
            {
                cout << "you can vote !!" << endl;
            }
        }
        catch(string a)
        {
            cout << a;
        }
        cout << endl;
    }
};

int main()
{
     division d1;
     voting v1;

    char psw[20];
    int a=0;
    string str="your password is strong";

    cout << "Enter password:";
    cin >> psw;
    
    for(int i=0;psw[i]!=NULL;i++)
    {
        if(psw[i]>=65 && psw[i]>=90)
        {
            a++;
        }
    }

    try
    {
        if(a>=1)
        {
            throw str;
        }
        else 
        {
            cout << "your password is not strong";
        }
    }
    catch(string str)
    {
        cout << str;
    }
    
    return 0;
}
