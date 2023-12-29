#include<iostream>
#include<string.h>
using namespace std;        

int main()
{
    int a;
    int b;

    string e = "ERROR";

    
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

}