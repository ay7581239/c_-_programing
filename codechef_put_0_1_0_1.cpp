#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a[1000];
    cout<<"t";
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
        cout<<"n";
	    cin>>n;
	    for( int j=0;j<n;j++)
	    {
            cout<<j;
	        cin>>a[j];
	    }
	     int c=0;
	    if(a[0]==1)
	    {
	        for(int j=1;j<n;)
	        {
	            if(a[j]==1)
	            c++;
	            if(a[j+1]==1)
	            c++;
                j=j+2;
	        }
	    }
	    else if(a[0]==0)
	    {
	        for(int j=1;j<n;)
	        {
	            if(a[j]==0)
	            c++;
	            if(a[j+1]==0)
	            c++;
                j=j+2;
	        }
	    }
	   // int m=c;
	    cout<<c<<endl;
	}
//	cout<<t;
	return 0;
}
