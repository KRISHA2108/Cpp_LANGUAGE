#include<iostream>
#include<string.h>
using namespace std;

class Formula
{
    public:
    virtual void calculate()=0;
};
class Circle : public Formula
{
    private:
    int r;
    double pi = 3.14;
   public:
     void  calculate() 
     {
        cout << "Enter Circle area:";
        cin >> r;
        cout << endl << endl;
        cout << "------:CIRCLE:------"<<endl << endl;
        cout<<"Area of the circle is:"<<pi*r*r<<endl;
        cout << endl << endl;
     }
};

class Triangle
{
    private:
    int h,b;
    
   public:
     void  calculate() 
     {
        cout << "Enter Triangle hight:";
        cin >> h;
        cout << "Enter Triangle with:";
        cin >> b;
        cout << endl << endl;
        cout << "------:TRIANGLE:------"<<endl << endl;
        cout<<"The area of the triangle is:"<<(float)0.5*(b*h);
        cout << endl << endl;
     }
};

class Rectangle
{
   private:
    int l,b;
    
   public:
     void  calculate() 
     {
        cout << "Enter Rectangle length:";
        cin >> l;
        cout << "Enter Rectangle with:";
        cin >> b;
        cout << endl << endl;
        cout << "------:RECTANGLE:------"<<endl << endl;
        cout<<"The area of the rectangle is:" << l*b;
        cout << endl << endl;
     }
};
int main()
{
    Circle c1;
    Triangle t1;
    Rectangle r1;

    c1.calculate();
    t1.calculate();
    r1.calculate();
}