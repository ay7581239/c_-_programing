#include<iostream>
//#include<string>      //option
using namespace std;
class student{
    public:
    int roll_no;
    int age;
    string name;
    char section;
    student(int roll,int age)     //user define constructor 
    {
        this->roll_no=roll;
        this->age=age;
    }
    void student1(string nam,char c)
    {
        this->name=nam;
        this->section=c;
    }
    void print()
    {
        cout<<name<<" section  "<<section<<" roll no. : "<<roll_no<<" age : "<<age<<endl;
    }
    ~student(){                             //user define destructor
        cout<<"destructor called"<<endl;
    }
};
int main(){
    student s1(10,15);
   s1.student1("abhi",'a');
    s1.print();
     student s2(1,5);
   s2.student1("abhishek",'g');
    s2.print();
    s1.age=77;
    s2=s1;           //copy assignment operator
    s2.print();
    s2.name="shiv";
    student s3(s2);  //copy constuctor
    s3.print();
    student s4(1,2);
    s4.print();
}