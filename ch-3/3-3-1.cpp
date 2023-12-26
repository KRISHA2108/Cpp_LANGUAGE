#include <iostream>
#include <string.h>
using namespace std;

class Companies
{
    public:
    int comp_id;
    char comp_name[20];
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    static char comp_ceo[20];

public:
    Companies(int Id, char name[], int staff, int year, int raw_year, int export_year)
    {
        this->comp_id = Id;
        strcpy(comp_name, name);
        this->comp_staff_quantity = staff;
        this->comp_revenue = year;
        this->comp_import_raw_diamonds = raw_year;
        this->comp_export_diamonds = export_year;
      

        cout << "COMP_ID :"
             << "\t"
             << "COMP_NAME:"
             << "\t\t"
             << "COMP_STAFF:"
             << "\t"
             << "COMP_REVENUE:"
             << "\t"
             << "COMP_RAW:"
             << "\t"
             << "COMP_EXPORT:"
             << "\t"
             << "COMP_CEO:" << endl;
        cout << comp_id << "\t" << comp_name << "\t" << comp_staff_quantity  << "\t" << comp_revenue << "\t" << comp_import_raw_diamonds << "\t\t" << comp_export_diamonds << "\t\t" << comp_ceo << endl
             << endl;
    }
};

char Companies :: comp_ceo[20] = "KRISHA";

int main()
{
    int n;
     int comp_id;
    char comp_name[20];
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    char comp_ceo[20];

    cout << "Enter companie number:";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter companie ID:";
        cin >> comp_id;
        cout << "Enter companie Name:";
        fflush(stdin);
        gets(comp_name);
        cout << "Enter companie Staff quantity:";
        cin >>  comp_staff_quantity;
        cout << "Enter companie Revenue(per year):";
        cin >> comp_revenue;
        cout << "Enter companie import raw diamonds(no.of raw diamonds imported per year):";
        cin >>  comp_import_raw_diamonds;
        cout << "Enter companie export diamonds(no. of diamonds per year):";
        cin >> comp_export_diamonds;
        cout << endl;

        cout << "---:COMPANIES DATA:---" << endl;

        Companies c1(int comp_id, char comp_name[], int comp_staff_quantity, int comp_revenue, int comp_import_raw_diamonds ,int comp_export_diamonds);
    }
    return 0;
}