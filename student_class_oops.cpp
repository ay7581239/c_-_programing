#include<iostream>
using namespace std;
class student{
    int age;
    char *name;
    public:
    student(int age,char *name)
    {
        this->age=age;
        this->name=name;
    }
    void display(){
    cout<<name<<" "<<age<<endl;
    }
};
int main()
{
    char name[]="Abhishek";
    student s1(20,name);
    s1.display();
    name[3]='e';
    student s2(24,name);    //shallow copy (only reference address value copy(like name))
    s2.display();
    s1.display();
   
}