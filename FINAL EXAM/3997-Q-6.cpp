#include<iostream>
#include<string.h>
using namespace std;

class Truck
{
    public:
    void setdata()
    {
          cout << "Truck is Empty" << endl;
    }
  
};

class Truck1 : public Truck
{
    public:
    void setdata()
    {
        cout << "Truck is Runnig....." << endl;
    }
};

int main()
{
    Truck1 t1;

    t1.setdata();
}