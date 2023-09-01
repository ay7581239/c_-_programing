#include<iostream>
#include "vehicle1.cpp"
using namespace std;
class car:public vehicle{
    public:
    int numgears;
     car()
    {
        cout<<"car default constructor call"<<endl;
    }
    ~car(){
        cout<<"car destructor call"<<endl;
    }
};