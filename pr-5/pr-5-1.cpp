#include<iostream>
using namespace std;

class Exception 
{
    double a,b;
    string e = "ERROR";
    public:
    Exception()
    {

    cout << "Enter the value of A:";
    cin >> a;
    cout << "Enter the value of B:";
    cin >> b;
    cout << endl;

    try
        {
            if(b==0 || a==0)
            {
                throw a;
            }
            else
            {
                throw false;
            }
        }
            catch(string e)
            {
                cout << e ;
            }
            catch(int e)
            {
                cout << "a:" << a << "\t" << "b:" << b;
            }
            catch(double e)
            {
                cout << "This value is double";
            }
            catch(...)
            {
                cout << "General Exception" ;
            }   
    }
};

int main()
{
    Exception e1;
    
    return 0;
}
