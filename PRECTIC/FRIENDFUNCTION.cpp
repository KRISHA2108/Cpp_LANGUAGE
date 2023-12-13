#include<iostream>
#include<string.h>
using namespace std;

class krisha
{

    private:
        int money = 50000;
        char course[20]= "RED & WHITE";

    friend void vinisha();

};

void vinisha()
{
    krisha k1;

    char course[20];
    cout << "\nMoney in the wallet of Krishna is : Rs."<<k1.money ;
    cout << "\nkrisha course: " << k1.course;
    strcpy(course,k1.course);

    cout << "\nMoney in the wallet of Vinisha is : Rs."<<k1.money ;
    cout << "\nVinisha course: " << k1.course;
}

int main() 
{
    vinisha();
    return 0;
}