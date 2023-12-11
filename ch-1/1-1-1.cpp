#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of elements you want in array: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "] :";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0)
        {
            cout << endl << "a[" << i << "]:" << a[i];
        }
    }

    return 0;
}