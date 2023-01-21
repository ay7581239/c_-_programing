#include<iostream>
using namespace std;
class student{
    public:
    int roll_no;
    string name;
    private:
    int age;
    public:
    void display(){
        cout<<age<<" "<<roll_no<<endl;
    }
    int getage(){
        return age;
    }
    void setage(int a){
        age=a;
    }

};
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