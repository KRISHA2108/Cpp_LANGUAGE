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

char  Hotel::hotel_name[20] ="Yammi";

int main()
{
    int n;
    Hotel h[n];
    

    cout << "Enter Number of Hotels" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
  
        cout << "Enter Hotel ID: ";
        cin >> h[i].hotel_id;
        cout << "Enter Hotel Type: ";
        gets(h[i].hotel_type);
        cout << "Enter Hotel Rating: ";
        cin >> h[i].hotel_rating;
        cout << "Enter Location: ";
        cin >> h[i].hotel_location;
        cout << "Year Established: ";
        cin >> h[i].hotel_establish_year;
        cout << "Number of Staff: ";
        cin >> h[i].hotel_staff_quantity;
        cout << "Room Quantity: ";
        cin >> h[i].hotel_room_quantity;
    }
    


}
