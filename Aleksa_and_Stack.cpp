#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        arr[0]=2;arr[1]=3;
        for(int i=2;i<n;i++)
        {
            long long k=(arr[i-1]+arr[i-2]-2)%1000000000;
            arr[i]=k;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}