#include "parent.cpp"
#include<iostream>
using namespace std;
class car:protected vehicle{
    public:
    int numgears;
    void print(){
        numtyres=4;
        cout<<"numtyres :"<<numtyres<<endl;
        cout<<"numgears :"<<numgears<<endl;
        cout<<"color :"<<color<<endl;
        //cout<<"maxspeed :"<<maxspeed<<endl;               //it is a private member
    }
};