#include<iostream>
using namespace std;

int main() {
	int n,i,temp,rev=0;
    cin>>n;
    while (n>0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    cout<<rev;	
    
}