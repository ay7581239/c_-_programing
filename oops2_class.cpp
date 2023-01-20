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