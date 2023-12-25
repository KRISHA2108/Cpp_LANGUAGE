#include <iostream>
#include <string.h>
using namespace std;

class Railway
{
private:
    int Train_Number;
    char Train_Name[20];
    char Source[20];
    char Destination[20];
    int Train_Time;

public:

    void setinput()
    {
        cout << "Enter Train Number:";
        cin >> Train_Number;
        fflush(stdin);
        cout << "Enter Train Name:";
        gets(Train_Name);
        cout << "Enter Source Station:";
        gets(Source);
        cout << "Enter Destination Station:";
        gets(Destination);
        cout << "Enter Time of Train:";
        cin >> Train_Time;
    }
    void setAdata()
    {
        cout << "\t---:TRAIN DITELS:---\t"<< endl;
        cout << "Train_Number\t"
             << "Trains_Name\t"
             << "Source\t"
             << "Destination\t "
             << "Train_Time"<< endl;

        cout << "---:Train Ditels:---"<< endl;
        cout << "1234  Api Dehli to Amdabad 2:00"<< endl;
        cout << "1236  Abc Amdabad to Mubai 4:00" << endl;
        cout << "1235  Sdr Surat to Davarka 6:00" << endl;
    }

    
    void Train()
    {
        
        cout << "Enter Train Number :";
        cin >> Train_Number;

        if(Train_Number==1234)
        {
            cout << "1234  Api Dehli to Amdabad 2:00"<< endl;
        }
        else if(Train_Number==1236)
        {
             cout << "1236  Abc Amdabad to Mubai 4:00" << endl;
        }
        else if(Train_Number==1235)
        {
            cout << "1235  Sdr Surat to Davarka 6:00" << endl;
        }
       
    }
};
int main()
{
    Railway r[3],r2;

   r2.Train();
    for(int i=0 ; i<3 ; i++)
    {
        r[3].setinput();
        r[3].setAdata();
    }
}
