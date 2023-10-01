#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n];
        int j=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==q)
            j=1;
        }
        if(j==1)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}