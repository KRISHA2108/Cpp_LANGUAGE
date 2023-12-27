#include<iostream>
using namespace std;

class a
{ 
    public:

    int x,y;

    void  setdata(int n1,int n2)
    {
        this->x=n1;
        this->y=n2;
    }

    void getdata()
    {
        while(y>=1000)
        {
            x++;
            y-=1000;
        }
        cout << "Km:" << x << "\t Meter:" << y;
    }

    a operator+(a n)
    {
        a tmp;

        tmp.x= this->x + n.x;
        tmp.y= this->y + n.y;

        return tmp;
    }

};

int main()
{
    int km1,km2,m1,m2,m=0,km=0;
    a b,c,d;

    cout << "Input1 :" << "Km:";
        cin >> km1;
        cout << "Meter:";
        cin >> m1;
        cout << endl << "input2 :" << "Km:";
        cin >> km2;
        cout << "Meter:";
        cin >> m2;

    b.setdata(km1,m1);
    c.setdata(km2,m2);

    d=b+c;    

    d.getdata();
    return 0;
}
