#include<iostream>
using namespace std;
int x=0;
class student{
    public:
    int roll_no=1;
    int age=2;
    static int totalstudent;
    void A();
    class inside{
        public:
        static int y;
    };
};
int student::totalstudent=100;       //initialise static data
// int student::age=25;             //it is not static member
void student::A(){ cout<<"define function outside"<<endl;}    //define function outside
int student::inside::y=5;                  //class inside another class
int main()
{
    student s1;
    cout<<student::totalstudent<<endl;    //to access a class static variable
    cout<<s1.age<<" "<<s1.roll_no<<endl;
    int x=10;
    cout<<::x<<endl;   //to access global variable use of resolution operator(::)
    cout<<x<<endl;     //to access local varible
    s1.A();
    cout<<student::inside::y<<endl;
}
