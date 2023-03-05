#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int imaginary;
    public:
    complex(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }
    void print()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    void add(complex const &f2)
    {
        real=this->real+f2.real;
        imaginary=this->imaginary+f2.imaginary;
    }
    void sub(complex const &f2)
    {
        real=this->real-f2.real;
        imaginary=this->imaginary-f2.imaginary;
    }
    void multiply(complex const &f2)
    {
        int n=this->real*f2.real-this->imaginary*f2.imaginary;
        imaginary=this->real*f2.imaginary+this->imaginary*f2.real;
        real=n;
    }
    void divide(complex const &f2)
    {
        int n=(this->real*f2.real+this->imaginary*f2.imaginary)/(f2.real*f2.real+f2.imaginary*f2.imaginary);
        imaginary=(this->imaginary*f2.real-this->real*f2.imaginary)/(f2.real*f2.real+f2.imaginary*f2.imaginary);
        real=n;
    }
};
int main()
{
    complex c1(10,3);
    complex c2(2,5);
    complex c3=c2;     //copy constructor
    c3=c1;             //copy assignment operator
    c1.print();
    c2.print();
    cout<<"add ";
    c1.add(c2);     
    c1.print();
    c1=c3;
    //c2.print();
    cout<<"sub ";
    c1.sub(c2);
    c1.print();
    //c2.print();
    c1=c3;
    cout<<"multiply ";
    c1.multiply(c2);
    c1.print();
    //c2.print();
    c1=c3;
    cout<<"divide ";
    c1.divide(c2);
    c1.print();
    //c2.print();
}