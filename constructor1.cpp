#include<iostream>
using namespace std;
class student{
    
    public:
    int roll_no;
    int age,i=0;
    student(int a,int r)
    {
        i++;
        cout<<this<<" "<<i<<endl;
       roll_no=r;
        this->age=a;
    }
};
int main()
{
    student s1(32,5);
    // s1->age=25;               /*tempCodeRunnerFile.cpp:1:1: error: 's1' does not name a type
                                   // s1->age=25;*/
    // s1->roll_no=2;
   // s1.student(32,3);
    cout<<s1.age<<" "<<s1.roll_no<<endl;
    cout<<&s1<<endl;
    student *s2=new student(24,5);
    cout<<s2->age<<" "<<s2->roll_no<<endl;
    student s3(1,2);
    student *s4=new student(s3);         //s3 function call;
    cout<<s4->age<<" "<<s4->roll_no<<endl; //
}