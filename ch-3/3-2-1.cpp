#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{



    int hotel_id;
    static char hotel_name[20];
    char hotel_type[20]; 
    int hotel_rating ;
    char hotel_location[20]; 
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

    public:
    void set_hotel_data()
    {
        cout << endl << "Enter Hotel ID: ";
        cin >> hotel_id;      
        fflush(stdin);
        cout << "Enter Hotel Type Hotel & Motel: ";
        gets(hotel_type);
        cout << "Enter Rating (1-7): ";
        cin >> hotel_rating;
         fflush(stdin);
        cout << "Enter Location: ";
        gets(hotel_location);
        cout << "Year Established: ";
        cin >> hotel_establish_year;
        fflush(stdin);
        cout << "Number of Staff Members: ";
        cin >>hotel_staff_quantity;
        fflush(stdin);
        cout << "Room Quantity: ";
        cin >>hotel_room_quantity;
    }

    void get_hotel_data()
    {
        cout << endl <<"----:HOTEL DATA:----"<< endl;
        cout <<"Displaying the details of all hotels." << endl << endl;
        cout << "ID : " << hotel_id << endl;
        cout << "Name : " << hotel_name << endl;
        cout << "Type : " << hotel_type << endl;
        cout << "Rating : " << hotel_rating << endl;
        cout << "Location : " << hotel_location << endl;
        cout << "Established Year : " << hotel_establish_year<<endl;
        cout << "Staff Quantity : " << hotel_staff_quantity << endl;
        cout << "Rooms Available : " << hotel_room_quantity << endl;

    }
  
};     

char Hotel::hotel_name[20] = "Hotel XYZ";
int main()
{
    int n;
    
    cout << "Enter Hotel Numbers:";
    cin >> n;
    
     Hotel h[n];
    
    for(int i=0;i<n;i++)
    {
        h[i].set_hotel_data();
    }
    
    for(int i=0;i<n;i++)
    {
        h[i].get_hotel_data();
    }
    
    return 0;
}

    