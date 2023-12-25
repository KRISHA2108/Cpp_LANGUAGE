#include<iostream>
using namespace std;

class p
{
    protected:

    float C,F,K;

    public:

    void input()
    {
        cout << "Enter Degree Celsius:";
        cin >> C;
    }
};

class Q : public p
{
    public:

    void Fehrenheit()
    {
        F=((float)9/5)*C + 32;
        cout << "Celsius to Fehrenheit: " << F << endl;
    }
};

class R : public Q
{
    public:

    void Kelvin()
    {
        K=((float)5/9)*(F+459.67);
        cout << "Fehrenhrit to Kelvin: " << K << endl;
    }
};

int main()
{
    R r1;

    r1.input();
    r1.Fehrenheit();
    r1.Kelvin();

    return 0;
}