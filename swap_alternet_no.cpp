#include <iostream>

using namespace std;

int main()
{
       long int n,x,arr[20];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
        if(n%2==0)
        {
        for(int j=0;j<n;)
          { int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
               j=j+2;
          }
        }
        else
        for(int j=0;j<n-1;)
          { int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
               j=j+2;
          }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}