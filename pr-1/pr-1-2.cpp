#include<iostream>
using namespace std;

int main()
{
    int sec1,hour,minit,second;
    
    cout << "Enter Any second:" ;
    cin >> sec1; 
    
    hour=sec1/3600;
    minit=(sec1 % 3600)/60;
    second=sec1-(hour*3600+(minit*60));
    
    cout << hour << ":" << minit << ":" << second;
    
    return 0;
}