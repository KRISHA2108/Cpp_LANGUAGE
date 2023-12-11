#include <iostream>
using namespace std;

int main()
{

    int fy, ly;
    cout << "Enter the first year: ";
    cin >> fy;

    cout << "Enter the last year: ";
    cin >> ly;

    int a[50], n = 0;
    for (int i = fy; i <= ly; i++)
    {
        if (i % 4 == 0)
        {
            a[n] = i;
            n++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}