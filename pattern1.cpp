#include<iostream>
using namespace std;
int main()
{
	int i,j,N,space;
    cin>>N;
    i=0;
    while(i<=N)
    {
        j=1;
        while(j<=N-i)
        {
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
      
    /*
    1
   12
  123
 1234
12345*/
}    