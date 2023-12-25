#include<iostream>
using namespace std;

class X 
{
    protected:

    int a;
    int b;
    int c;
};

class Y : public X
{
    public:

    void setdata()
    {
        cout << "Enter A :";
        cin >> a; 
        cout << "Enter B :";
        cin  >> b;
        cout << "Enter C :";
        cin >> c;
    }

    void getdata()
    {
        cout << " A : " << a << endl;
        cout << " B : " << b << endl;
        cout << " C : " << c << endl;
    }

    void sumcubes()
    {
        cout << "---: Sum of cubes :---" << endl << endl;
        cout << endl << "sum of A & B & C Cubes:" << (a*a*a)+(b*b*b)+(c*c*c);
    }
};

int main()
{
    Y y1;

    y1.setdata();
    y1.getdata();
    y1.sumcubes();

    return 0;
}