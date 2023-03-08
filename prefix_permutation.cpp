#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,n;
	cin>>a;
	while(a--)
	{
	    cin>>n;
	    int p[n];
	    int sum=1,c=0;
	    for(int i=0;i<n;i++)
	    {
	        p[i]=i+1;
	    }
	    for(int i=1;i<n;i++)
	    {
	        int k=p[i];
	        sum=sum+k;
	        if(sum%(i+1)==0)
	        {
	            int temp=p[i];
	           if(i+1<n)
	            {
	            p[i]=p[i+1];
	            sum=sum-k+p[i+1];
	            p[i+1]=temp;
	            }
	            else
	            {
	                c=-1;
	                //break;
	            }
	        }
	        else if(c==-1)
	        {
	            break;
	        }
	    }
	    if(c==-1)
	    cout<<-1<<endl;
	    else
	    {
	        for(int i=0;i<n;i++)
	        cout<<p[i]<<" ";
	        cout<<endl;
	    }
	}
	return 0;
}
// 3
// input
// 4
// 6
// 7
// output
// 3 4 1 2
// 1 2 4 6 3 5
// -1