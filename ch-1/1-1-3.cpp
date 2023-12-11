#include <iostream>
using namespace std;

int main()
{
    char name[50], i;

    cout << "Enter your name:";
    cin >> name;

    for (i = 0; i < 50; i++)
    {
        if (name[i] > 'A' && name[i] < 'Z')
        {
            name[i] += 32;
        }
        else
        {
            name[i] -= 32;
        }
    }

    cout << "Name: " << name << endl;

}