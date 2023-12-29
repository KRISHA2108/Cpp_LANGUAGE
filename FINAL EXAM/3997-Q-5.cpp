#include<iostream>
#include<string.h>
using namespace std;

class HotelManagement
{
  private:

        int Hotel_Number;
        char  Hotel_Name[20];
        char Hotel_Type[20];
        int Hotel_Rating;
        char Hotel_Location[50];

    public:

    HotelManagement(int Hotel_Number,char Hotel_Name[],char Hotel_Type[],int Hotel_Rating,char Hotel_Location[])
    {
        this->Hotel_Number;
        strcpy(this->Hotel_Name,Hotel_Name);
        strcpy(this->Hotel_Type,Hotel_Type);
        this->Hotel_Rating;
        strcpy(this->Hotel_Location,Hotel_Location);
    }

    void setdata()
    {
        cout << "Enter Hotel Number:";
        cin >> Hotel_Number;
        cout << "Enter Hotel Name: ";
        gets(Hotel_Name);
        cout << "Enter Hotel Type ike Hotel OR Motel: ";
        gets(Hotel_Type);
        cout << "Enter Hotel Rating: ";
        cin >> Hotel_Rating;
        cout << "Enter Hotel Location: ";
        gets(Hotel_Location);
    }

    void getdata()
    {
        cout << "-----:HOTEL DATA:-----" << endl;
        cout << "Hotel Number : " << Hotel_Number << endl;
        cout << "Hotel Name   : " << Hotel_Name << endl;
        cout << "Hotel Type   : " << Hotel_Type << endl;
        cout << "Hotel Rating : " << Hotel_Rating << endl;
        cout << "Hotel Location: " << Hotel_Location << endl;

    }

};
int main()
{
    HotelManagement h1[i];
    int n,i;

    cout << "Enter Number of Hotel :";
    cin >> n;

    for (int i=0 ; i<n; i++)
    {
        HotelManagement h1[i](Hotel_Number,Hotel_Name[],Hotel_Type[], Hotel_Rating, Hotel_Location[]);
    }
    for(int i=0; i<n; i++)
    {
        h1[i].setdata();
        h1[i].getdata();
    }


}