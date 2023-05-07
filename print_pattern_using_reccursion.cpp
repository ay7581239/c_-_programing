#include<iostream>
using namespace std;
void print(int j,int n)
{
    if(j==n) return;
    for(int i=n-1;i>j;i--)
    cout<<" ";
    for(int i=0;i<j*2+1;i++)
    cout<<'*';
    cout<<endl;
    print(j+1,n);
}
int main()
{
    int n;
    cin>>n;
    print(0,n);
    return 0;
}