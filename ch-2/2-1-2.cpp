#include <iostream>
using namespace std;

class Car
{

public:
  int car_id;
 char car_company_name[20];
 char car_color[10];
 char car_model[20];
 int car_release_year;
};

int main()
{
    Car c1;
    Car c2;
    Car c3;
    Car c4;
    
   cout << "Enter car Id:" << endl;
   cin >> c1.car_id;
   fflush(stdin);
   cout << "Enter Company Name:" << endl;
   gets(c1.car_company_name);
   fflush(stdin);
   cout << "Enter Car Color:" << endl;
   gets(c1.car_color);
   fflush(stdin);
   cout << "Enter Car Model:" << endl;
   gets(c1.car_model);
   cout << "Enter Car Release Year:" << endl;
   cin >> c1.car_release_year;
   cout << endl;

    cout << "Enter car Id:" << endl;
   cin >> c2.car_id;
   fflush(stdin);
   cout << "Enter Company Name:" << endl;
   gets(c2.car_company_name);
   fflush(stdin);
   cout << "Enter Car Color:" << endl;
   gets(c2.car_color);
   fflush(stdin);
   cout << "Enter Car Model:" << endl;
   gets(c2.car_model);
   cout << "Enter Car Release Year:" << endl;
   cin >> c2.car_release_year;
   cout << endl;

   cout << "Enter car Id:" << endl;
   cin >> c3.car_id;
   fflush(stdin);
   cout << "Enter Company Name:" << endl;
   gets(c3.car_company_name);
   fflush(stdin);
   cout << "Enter Car Color:" << endl;
   gets(c3.car_color);
   fflush(stdin);
   cout << "Enter Car Model:" << endl;
   gets(c3.car_model);
   cout << "Enter Car Release Year:" << endl;
   cin >> c3.car_release_year;
   cout << endl;

   cout << "Enter car Id:" << endl;
   cin >> c4.car_id;
   fflush(stdin);
   cout << "Enter Company Name:" << endl;
   gets(c4.car_company_name);
   fflush(stdin);
   cout << "Enter Car Color:" << endl;
   gets(c4.car_color);
   fflush(stdin);
   cout << "Enter Car Model:" << endl;
   gets(c4.car_model);
   cout << "Enter Car Release Year:" << endl;
   cin >> c4.car_release_year;
   cout << endl;

   cout << "---:CAR DATA:---"<< endl;

   cout << "Id: "<< c1.car_id << endl;
   cout << "Company Name: " << c1.car_company_name << endl;
   cout << "Color: " << c1.car_color << endl;
   cout << "Model: " << c1.car_model << endl;
   cout << "Year: " << c1.car_release_year << endl;
   cout << "---" << endl;

   
   cout << "Id: "<< c2.car_id << endl;
   cout << "Company Name: " << c2.car_company_name << endl;
   cout << "Color: " << c2.car_color << endl;
   cout << "Model: " << c2.car_model << endl;
   cout << "Year: " << c2.car_release_year << endl;
   cout << "---" << endl;

   
   cout << "Id: "<< c3.car_id << endl;
   cout << "Company Name: " << c3.car_company_name << endl;
   cout << "Color: " << c3.car_color << endl;
   cout << "Model: " << c3.car_model << endl;
   cout << "Year: " << c3.car_release_year << endl;
   cout << "---" << endl;

   
   cout << "Id: "<< c4.car_id << endl;
   cout << "Company Name: " << c4.car_company_name << endl;
   cout << "Color: " << c4.car_color << endl;
   cout << "Model: " << c4.car_model << endl;
   cout << "Year: " << c4.car_release_year << endl;
   cout << "---" << endl;

   return 0;

}