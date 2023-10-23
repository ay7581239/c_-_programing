#include<iostream>
using namespace std;
bool checkprime(int n)
{
    int countfactor=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if((i*i)==n)
            countfactor+=1;
            else
            countfactor+=2;
        }
    }if(countfactor==2)
    return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(checkprime(i))
        count++;
    }cout<<count;
}