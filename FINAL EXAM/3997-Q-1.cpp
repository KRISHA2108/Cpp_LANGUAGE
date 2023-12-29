#include<iostream>
#include<string.h>
using namespace std;


int main()
{

    int n, factorial=0;

    cout << "Enter any Number :";
    cin >> n;

    factorial = n/2;
    factorial = n%2;
    factorial = n*n*(10/2);

    cout << "FACTORIAL NUMBER: " << factorial << endl;

}