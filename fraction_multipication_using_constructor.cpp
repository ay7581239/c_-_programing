#include<iostream>
using namespace std;
class fraction1{
private:
int numerator;
int denominator;
public:
fraction1(int numerator,int denominator)
{
    this->numerator=numerator;
    this->denominator=denominator;
}
void print()
{
    cout<<numerator<<"/"<<denominator<<endl;
}
void simplify()
{
    int gcd=1;
    int j=min(this->numerator,this->denominator);
    for(int i=1;i<=j;i++)
    {
        if(this->numerator%i==0&&this->denominator%i==0)
        gcd=i;
    }
    this->denominator=this->denominator/gcd;
    this->numerator=this->numerator/gcd;
}
void multiply(fraction1 f2)
{
    numerator=this->numerator*f2.numerator;
    denominator=this->denominator*f2.denominator;
    simplify();
}
};
int main(){
fraction1 f1(10,3);
fraction1 f3(15,4);
f1.print();
f3.print();
f1.multiply(f3);
f1.print();
f3.print();
}