#include <iostream>
using namespace std;

class Studend
{
    private:

        int stu_id;
        char stu_name[20];
        int stu_age;
        char stu_course[50];
        char stu_city[20];
        char stu_email[20];
        char stu_college[50];

        public:

        void setdata()
        {

            cout << "Enter Student ID : ";
            cin >> stu_id;
            fflush(stdin);
            cout << "Enter Student Name : ";
            gets(stu_name);
            cout << "Enter Student Age : ";
            cin >> stu_age;
            fflush(stdin);
            cout << "Enter Student Course : ";
            gets(stu_course);
            fflush(stdin);
            cout << "Enter Student City : ";
            gets(stu_city);
            fflush(stdin);
            cout << "Enter Student Email : ";
            gets(stu_email);
            fflush(stdin);
            cout << "Enter Student College : ";
            gets(stu_college);
            cout << endl;
            getdata();
            cout << endl;

        }

        void getdata()
        {
            cout << "--:STUDENT DATA:--"
                 << endl << endl;
            cout << "\nStudent ID : " << stu_id;
            cout << "\nStudent Name : " << stu_name;
            cout << "\nStudent Age : " << stu_age;
            cout << "\nStudent Course : " << stu_course;
            cout << "\nStudent City : " << stu_city;
            cout << "\nStudent Email : " << stu_email;
            cout << "\nStudent College : " << stu_college;
            cout << endl;
        }
};

int main()
{
    Studend stu1;
    Studend stu2;
    Studend stu3;
    Studend stu4;
    Studend stu5;

    
            stu1.setdata();
            stu2.setdata();
            stu3.setdata();
            stu4.setdata();
            stu5.setdata();

         
        return 0;
}