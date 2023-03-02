#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        for ( j = 1; j <=n-i; j++)
        {
           cout<<j;
        }
        for (j =0; j <2*i; j++)
        {
            cout<<'*';
        }
        for ( j= n-i; j>=1; j--)
        {
            cout<<j;
        }
        
    
        
       cout<<endl; 
    }
}
// 12344321
// 123**321
// 12****21
// 1******1
