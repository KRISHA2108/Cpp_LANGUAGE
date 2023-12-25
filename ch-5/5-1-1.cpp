#include<iostream>
using namespace std;

class opration
{ 
    public:

    void arithmatic(int a,int b)
    {
        cout << "Addition of A & B:" << a+b << endl;
    }

     void arithmatic(int a,int b,int c)
    {
        cout << "Subtraction of A & B & C:" << a-b-c << endl;
    }

    void arithmatic(int a,int b,int c,int d)
    {
        cout << "Multiplication of A, B , C & D:" << a*b*c*d << endl;
    }

     void arithmatic(int a,int b,int c ,int d,int e)
    {
        cout << "Division of A / B / C / D  / E:" << a/b/c/d/e << endl;
    } 
};

int main()
{
    opration o1;

    o1.arithmatic(20,10);
    o1.arithmatic(10,20,30);
    o1.arithmatic(10,20,30,40);
    o1.arithmatic(10,20,30,40,50);

    return 0;
}