#include<iostream>
#include<string.h>
using namespace std ;

class Cricket
{
    public:
    
    void Totalover()
    {
    cout << "Cricket";
    }
};

class T20Match : public Cricket
{   public:
     
    void Totalover()
    {
    cout << "20 Overs" << endl;
    }
};

class Testmatch: public Cricket 
{
    public:
    
    void Totalover()
    {
        cout << endl << "Unlimited Overs" << endl;
    }    
};

int main()
{
    T20Match c1;
    Testmatch c2;
    
    c1.Totalover();
    c2.Totalover();
    
    return 0;
}