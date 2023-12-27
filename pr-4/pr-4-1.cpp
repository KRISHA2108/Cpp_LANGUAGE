#include<iostream>
#include<string.h>
using namespace std;

class Message
{
    private:
    char s[20]="String";
    public:
    Message()
    {
        char s2[20]; 
    }

    int print()
    {
        cout << "First print:";
        return 12;
    }

    void print(char s1[20])
    {
        int a,b;
        char ns[a+b];
        a=strlen(s);
        b=strlen(s1);

        cout << "---";
        
        for(int i=0;i<a+b;i++)
        {
            ns[i]=s[i];
        }

        for(int i=0;i<a+b;i++)
        {
            ns[a+i]=s1[i];
        }

       cout << endl << "Marge String :" << ns ;
    }
};

int main()
{
    Message m;
    char n[20];
    char s1[20];
    cout << "Enter Any String:";
    cin >> s1;
    m.print(s1);

    return 0;
}
