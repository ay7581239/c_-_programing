#include<iostream>
using namespace std;
int a[10000];
void searchArray();
void time();
int main()
{
  long int t,n,i;
    cin>>t;
    for(int i=0;i<t;i++)
    time();
}
void time()
{
    
     searchArray();
}
void searchArray()
{ 
    long int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>x;int f=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            {cout<<i<<endl;
            f=1;
            break;}
        
    }
    if(f!=1)
    cout<<"-1"<<endl;
}