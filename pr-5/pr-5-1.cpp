#include<iostream>
using namespace std;

int main()
{
    int a,b;
    string e="ERROR";

    cout << "Enter the value of A:";
    cin >> a;
    cout << "Enter the value of B:";
    cin >> b;

    try
        {
            if(b==0 || a==0)
            {
                throw e;
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
    
    return 0;
}
