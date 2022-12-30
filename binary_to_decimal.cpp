#include<iostream>
using namespace std;
int pow(int);
int main()
{
    long int n,temp,bin=0,i,k;
    cin>>n;
    while (n>0)
    {
        temp=n%10;
        bin=bin+temp;
        n=n/10;
        k=pow(i);
    }
    cout<<k;
}
int pow(int n)
{
    if (n<=1)
    {
        return 1;
    }
     else 
        return (2*pow(n-1));
    
}