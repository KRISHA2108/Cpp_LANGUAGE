#include<iostream>
#include<string.h>
using namespace std;

class Shape
{
protected:
    int with;
    int hight;
    
protected:
     Shape()   
    {
        cout << "Enter Width:";
        cin >> with;
        cout << "Enter Height:";
        cin >> hight;
        cout << endl;
    }
};
class Triangle : public Shape
{
public:
    void Tarea()
    {
        cout << "---:Triangle:---" << endl;
        cout << "Area of Triangle :" << 0.5 * hight * with << endl << endl;
    }
};

class Rectangle : public Shape
{
public:
    
    void Rarea()
    {
        cout << "---:Rectangle:---" << endl;
        cout << "Area of Rectangle:" << hight * with;
    }
};
int main()
{
    Triangle t1;
    Rectangle r1;
   
    t1.Tarea();
  
    r1.Rarea();
}
