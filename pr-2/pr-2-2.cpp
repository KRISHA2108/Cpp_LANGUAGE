#include <iostream>
#include <string.h>
using namespace std;

class Supermarket
{
    int Item_Number;
    char Item_Name[20];
    int Quantity;
    int Price;
    int Discount;

    int idk;
    char psw[20];
    int a=0,b=0,c=a,d=b;
    int n;
    int Number;

public:
    void setdata()
    {

        cout << "Enter Item Number:";
       cin >> Item_Number;
       fflush(stdin);
        cout << "Entet Item Name:";
        gets(Item_Name);
        cout << "Enter Item Quantity:";
        cin >> Quantity;
        cout << "Enter the price of item:";
        cin >> Price;
        cout << "Enter the discount(%): ";
        cin >> Discount;
    }

    void veification()
    {

        cout << "\t---:VERIFICATION:--- "<< endl;
        cout << "Enter your Id:";
        cin >> idk;
        fflush(stdin);
        cout << "Enter your Password:";
        gets(psw);
    }

    void output(char id[20], char password[20])
    {

        veification();

        for (int i = 0; id[i] != NULL; i++)
        {
            if (id[i] == idk)
                a++;
        }
        for (int i = 0; password[i] != NULL; i++)
        {
            if (password[i] == psw[i])
                b++;
        }

        if (a == 11 && b == 6)
        {

            cout << "|\tnumber\t|\tname\t|\tprice\t|\tquantity\t|\tdiscount\t| ";
        }
        else
        {
            cout << "Enter" << endl;
        }

        if (a == 11 && b == 6)
        {

            cout << "|\t" << Item_Number << "\t|\t" <<Item_Name << "\t|\t" << Quantity << "\t|\t" << Price<< "\t|\t" << Discount<< "\t| " << endl;
        }
        else
        {
            cout << "Enter" << endl;
        }
    }

    void userinput()
    {
        cout << "Enter Item Number:";
        cin >> n;

        if (n == Number)
        {
           cout << "|\t" << Item_Number << "\t|\t" <<Item_Name << "\t|\t" << Quantity << "\t|\t" << Price<< "\t|\t" << Discount<< "\t| " << endl;
                
        }
    }
};

int main()
{
    char id[20] = "Krisha2108", password[10] = "1236547";
    int n;

    Supermarket s1;

    s1.setdata();
    s1.output(id, password);
    s1.userinput();

    return 0;
}