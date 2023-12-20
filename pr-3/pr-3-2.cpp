#include <iostream>
using namespace std;

class Numbercs
{
protected:
    int n;

public:
    void setNdata()
    {
        cout << "Enter any Number:";
        cin >> n;
    }
};

class Square : public  Numbercs
{
public:
    void square()
    {
        cout << "---:SQUARE:---" << endl;
        cout << "square:" << n * n << endl;
    }
};
class Cube : public  Numbercs
{
public:
    void cube()
    {
        cout << "---:CUBE:---" << endl;
        cout << "cube:" << n * n * n;
    }
};
int main()
{
    Square s1;
    Cube c1;

    s1.setNdata();
    s1.square();

    c1.setNdata();
    c1.cube();
}