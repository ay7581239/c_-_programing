#include <iostream>
using namespace std;

int main() {
   
 int n,i,j,k;
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
         j=1;
        while(j<=2*i-1)
        {
            cout<<"*";j++;
        }
        i++;
        cout<<endl;
    }
    i=1;
    while (i<n)
    {
         j=n-1;
        while(j>=n-i)
        {
            cout<<" ";
            j--;
        }
          j=n;
        while(j>=2*i-1)
        {
            cout<<"*";j--;
        }
      i++;
      cout<<endl;
    }
    /*
     *  not even no.
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    */
    
}