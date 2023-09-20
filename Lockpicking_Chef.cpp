#include <bits/stdc++.h>
using namespace std;
int help(char e,char y){
    int i=int(e)-48,j=int(y)-48;
    int c=0,k=i;
    while(i!=j&&k!=j)
    {
        c++;
        if(i==9)
        {
            i=0;
        }
        else
        i++;
        if(k==0)
        {
            k=9;
        }
        else
        k--;
    }
    return c;
}
int help1(string w,string r)
{
    int k=0;
    for(int i=0;i<r.size();i++)
    {
        k+=help(w[i],r[i]);
    }
 
    return k;
}
int main() {
	// your code goes here
	int t;
    cout<<"Enter the no. of test case"<<endl;
	cin>>t;
	while(t--)
	{
	    int len,l;
        cout<<"Enter the length of string & enter the length of lock"<<endl;
	    cin>>len>>l;
        cout<<"Enter the string in which we change to find string lock & enter the lock string"<<endl;
	    string s,s1;
	    cin>>s>>s1;
	    int c=INT_MAX;
	    for(int i=0;i<s.size()-l+1;i++)
	    {
	       int j=help1(s.substr(i,l),s1);
	       if(j<c)
	       c=j;
	    }cout<<c<<endl;
	}
	return 0;
}