#include<iostream>
using namespace std;
class student{
    public:
    int roll_no=1;
    int age=2;
    static int totalstudent;
};
int student::totalstudent=100;
// int student::age=25;             //it is not static member
// int student::roll_no=3;          //it is not static member
int main()
{
    student s1;
    cout<<student::totalstudent<<" "<<s1.age<<" "<<s1.roll_no<<endl;
}
