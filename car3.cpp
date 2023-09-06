#include<iostream>
#include "vehicle3.cpp"
using namespace std;
class car:public vehicle{
    public:
    int numgears;
    car()
    {
        cout<<"car default constructor call"<<endl;
    }
     car(int x,int y):vehicle(x)
    {
        numgears=y;
        cout<<"car parametrised constructor call"<<endl;
    }
    ~car(){
        cout<<"car destructor call"<<endl;
    }
};