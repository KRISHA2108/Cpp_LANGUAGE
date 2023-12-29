#include <iostream>
#include <string.h>
using namespace std;

class BankManagement
{
private:

    int acount_Number;
    char acount_Name[20];
    char acount_Type[20];
    char acount_Branch[20];
    int acount_Balance;

    public:
    void setBankData()
    {
         cout << "Enter Your Acount Number :";
         cin >> acount_Number;
         fflush(stdin);
         cout << "Enter Your Acount Name : ";
         gets(this->acount_Name);
         cout << "\n Enter Your Acount Type : ";
         gets(this->acount_Type);
         cout << "Enter Your Branch Location : ";
         gets(this->acount_Branch);
         cout << "Enter The Initial Balance : $";
         cin >> acount_Balance;
    }

    void getBankData()
    {
        cout << "----:BANK DATA:----" << endl;
        cout << "Account Number  : " << acount_Number << endl;
        cout << "Acount Name   : " << acount_Name << endl;
        cout << "Account Type    : " << acount_Type << endl;
        cout << "Branch          : " << acount_Branch << endl;
        cout << "Initial Balance  : $" << acount_Balance << endl;
    }

    void setdata()
    {
        
        int c;
        cout << "Enter Any Number :";
        cin >> c;
    }
};
int main()
{

    int n;
    BankManagement b1;


    cout << "Enter Number of data :";
    cin >> n;

    b1.setBankData();
    b1.setBankData();
    b1.setdata();



}