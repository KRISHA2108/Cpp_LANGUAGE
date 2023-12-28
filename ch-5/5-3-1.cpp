#include<iostream>
using namespace std;

class Result
{
    public:

    int subject;

    void setscidata()
    {
        cout << "Enter Student Scince Marks:";
        cin >> subject;
    }

    Result operator-(int n)
    {
        Result temp;

        temp.subject = subject - n;
        return temp;
    }
    Result operator+(int n)
    {
        Result temp;

        temp.subject = subject + n;
        return temp;
    }

    void grade(double percentage)
    {
        if(percentage >= 90)
        {
            cout << endl << "GREAD : A+";
        }
        else if(percentage >= 80)
        {
            cout << endl << "GREAD :A";
        }
        else if(percentage >= 70)
        {
            cout << endl << "GREAD :B+";
        }
        else if(percentage >= 60)
        {
            cout << endl << "GREAD :B";
        }
        else if(percentage >= 50)
        {
            cout << endl << "GREAD :C";
        }
        else if(percentage >= 40)
        {
            cout << endl << "GREAD :D";
        }
        else
        {
            cout << endl << "YOU ARE FAIL !!";
        }
    }
};

int main()
{
    Result maths;
    Result Science;
    Result english;
    Result gujarati;
    Result social_science;
    Result computer;

    Science.setscidata();
    cout << endl << "Sci\t\t:"  << Science.subject << endl;

    maths = Science-3;
    cout << "Maths\t\t:"  << maths.subject << endl;

    english = maths+2;
    cout << "Engliah\t\t:" << english.subject << endl ;

    gujarati = english+2;
    cout << "Gujarati\t:" << gujarati.subject << endl;

    social_science = gujarati-3;
    cout << "Social science\t:" << social_science.subject << endl;

    computer = social_science+4;
    cout << "Computer\t:" << computer.subject << endl << endl;

    cout << "-------------:STUDENT RESULT:-------------"<< endl << endl;

    int total = Science.subject + maths.subject + english.subject + gujarati.subject + social_science.subject + computer.subject;
    cout << "------:ALL SUBJECT TOTAL:------" << endl << endl;
    cout << endl << "Total:" << total << endl;

    double percentage=((double)total*100)/600;

    cout << "------:PERCENTAGE:------" << endl << endl;
    cout << endl << "Percentage :" << percentage << endl << endl;
     cout << "------:GREAD :------" << endl << endl;
    maths.grade(percentage);
    return 0;
}