#include <iostream>
using namespace std;

class Customer
{
private:
            int cust_id;
            char cust_name[20];
            int cust_age;
            char cust_agecust_city[20];
            double cust_mobile_number;
            int cust_simcard_validity;
            char cust_telecom_brand_name[20];

public:
    void setdata()
    {
        cout << "Enter Customer Id: ";
        cin >> cust_id;
        fflush(stdin);
        cout << "Enter Customer Name : ";
        gets(cust_name);
        cout << "Enter Customer Age : ";
        cin >> cust_age;
        fflush(stdin);
        cout << "Enter City of Residence : ";
        gets(cust_agecust_city);
        cout << "Enter Mobile Number : ";
        cin >> cust_mobile_number;
        cout << "Enter Sim Card Validity (In Year) : ";
        cin >> cust_simcard_validity;
        fflush(stdin);
        cout << "Enter Telecom Brand Name : ";
        gets(cust_telecom_brand_name);
        cout << endl
             << endl;

        getdata();
    }

    void getdata()
    {
        cout << "--: Customer Data:--";
        cout << endl
             << endl;
        cout << "\nCustomer ID : " << cust_id;
        cout << "\nName : " << cust_name;
        cout << "\nAge : " << cust_age;
        cout << "\nCity of Residence : " << cust_agecust_city;
        cout << "\nMobile Number : +91-" << cust_mobile_number;
        cout << "\nSim Card Validity : " << cust_simcard_validity << " Years";
        cout << "\nTelecome Brand : " << cust_telecom_brand_name;
        cout << endl;
    }
};

int main()
{
    Customer c1;
    Customer c2;
    Customer c3;
    Customer c4;
    Customer c5;

    c1.setdata();
    c2.setdata();
    c3.setdata();
    c4.setdata();
    c5.setdata();

    return 0;
}