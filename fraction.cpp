#include<iostream>
using namespace std;
class fraction{
    private:
    int numerator;
    int denominator;
    public:
    fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }void print(){
    cout<<numerator<<"/"<<denominator<<endl;
    }
    void simplify(){
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if(this->numerator%i==0&&this->denominator%i==0)
            gcd=i;
        }
        this->denominator/=gcd;
        this->numerator=this->numerator/gcd;
    }
    void add(fraction f2){
        int lcm=this->denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator+(y*f2.numerator);
        numerator=num;
        denominator=lcm;
        simplify();
    }
};
int main()
{
    fraction f1=(10,5);
    fraction f2=(15,4);
    f2.print();
    f1.add(f2);
    f1.print();
    f2.print();
}