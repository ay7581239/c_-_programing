//use of getter & setter function;


#include<iostream>
using namespace std;
#include"oops2_class.cpp"
int main()
{
    student s1;
    s1.name="shiv prakash";
    s1.roll_no=39;
    //s1.age=10;       //private class member not access
    s1.setage(25);     //giving value to private member
   s1.display();
   int p=s1.getage();   //to access private class member
   cout<<s1.name<<" "<<"age:"<<p<<" "<<"roll_no :"<<s1.roll_no<<endl;
}