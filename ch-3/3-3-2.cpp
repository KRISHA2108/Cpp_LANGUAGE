#include <iostream>
#include <string.h>
using namespace std;

class cafe_data
{
    int cafe_id;
    char cafe_name[20];
    char cafe_type[20];
    int cafe_rating;
    char cafe_location[20];
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    cafe_data()
    {
        cafe_set();
        cafe_get();
    }
    void cafe_set()
    {
        cout << "Enter cafe id :";
        cin >> cafe_id;
        fflush(stdin);
        cout << "Enter cafe name : ";
        gets(cafe_name);
        cout << "Enter cafe type (like a rooftop or normal) :";
        gets(cafe_type);
        cout << "Enter cafe rating  (like 1 Star, 2 Start, ..., 5 Star):";
        cin >> cafe_rating;
        fflush(stdin);
        cout << "Enter cafe location (city name):";
        gets(cafe_location);
        cout << "Enter year of establishment :";
        cin >> cafe_establish_year;
        cout << "How many staff are there in this cafe? :";
        cin >> cafe_staff_quantity;
    }
      void cafe_get()
    {
        cout << "id\tname\ttype\trating\tcity\tyear\tstaff" << endl;
        cout << this->cafe_id << "\t" << this->cafe_name << "\t" << this->cafe_type << "\t" << this->cafe_rating << "\t" << this->cafe_location << "\t" << this->cafe_establish_year << "\t" << this->cafe_staff_quantity << endl;
    }
};

int main()
{
    int n;

    cout << "Enter Cafe Number:";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cafe_data c1;
    }

    return 0;
}