#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{

    public:

    int hotel_id;
    static char hotel_name[20];
    char hotel_type[20]; 
    int hotel_rating ;
    char hotel_location[20]; 
    int hotel_establish_year;
    int hotel_staff_quantity;
    char hotel_room_quantity[20];
};

char  Hotel::hotel_name[20] ="ABC";

int main()
{
    int n,i;
    Hotel h[n];
    

    cout << "Enter Number of Hotels" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
  
        cout << "Enter Hotel ID: ";
        cin >> h[i].hotel_id;
        fflush(stdin);
        cout << "Enter Hotel Type: ";
        gets(h[i].hotel_type);
        cout << "Enter Hotel Rating: ";
        cin >> h[i].hotel_rating;
         fflush(stdin);
        cout << "Enter Location: ";
        gets(h[i].hotel_location);
        cout << "Year Established: ";
        cin >> h[i].hotel_establish_year;
        cout << "Number of Staff: ";
        cin >> h[i].hotel_staff_quantity;
        fflush(stdin);
        cout << "Room Quantity: ";
        gets(h[i].hotel_room_quantity);
    }
    cout <<"Displaying the details of all hotels." << endl;
    cout << "ID : " << h[i].hotel_id << endl;
    cout << "Name : " << h[i].hotel_name << endl;
    cout << "Type : " << h[i].hotel_type << endl;
    cout << "Rating : " << h[i].hotel_rating << endl;
    cout << "Location : " << h[i].hotel_location << endl;
    cout << "Established Year : " << h[i].hotel_establish_year<<endl;
    cout << "Staff Quantity : " << h[i].hotel_staff_quantity << endl;
    cout << "Rooms Available : " << h[i].hotel_room_quantity << endl;

    return 0;

    
}
