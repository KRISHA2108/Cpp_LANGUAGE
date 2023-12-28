#include<iostream>
using namespace std;

int main()
{
    int age;
    string a = "YOU ARE NOT ELIGIBLE TO VOTE !!";

        cout << "ENTER YOUR AGE:";
        cin >> age;

        try
        {
            if(age < 18)
            {
                throw a;
            }
            else
            {
                cout << "YOU ARE ELIGIBLE TO VOTE !!";
            }
        }
        catch(string a)
        {
            cout << a;
        }
}
