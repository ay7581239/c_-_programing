#include<iostream>
using namespace std;
#include"oops1_class.cpp"
int main()
{
    student s1;
    s1.age=24;
    s1.roll_no=3;
    cout<<s1.age<<" "<<s1.roll_no<<endl;
    student*s3=new student;
    (*s3).age=65;
    (*s3).roll_no=5;
    cout<<(*s3).age<<" "<<s3->roll_no<<endl;
}