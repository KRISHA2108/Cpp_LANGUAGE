#include<iostream>
using namespace std;

class sum
{
    private:
        int k=50,b=20;
        
        int add(int k,int b)
        {
            cout << "sum :" << k+b;
        }
};

// PRIVATE CLASS SUM NOT POSSIBEL USE TO MAIN FUNCTION..

class name
{
    public:
    char surname[20];
    char fristname[20];
    char lastname[20];
};

//  PUBLIC CLASS NAME USED MAIN FUNCTION..
int main()
{
    name s,a;
    
    cout << "Enter your Surname:";
    cin >> s.surname;
    cout << "Enter your Fristname:";
    cin >> s.fristname;
    cout << "Enter your Last name:";
    cin >> s.lastname;
    
    cout << endl << s.surname  << " " << s.fristname << " " << s.lastname;
    
    return 0;
}