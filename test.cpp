#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {

        for (j = 0; j<=n-i; j++)
        {
            cout<<" ";
        }
        int l=i;
        int k=i-1;j=1;
        while(j<=2*i-1)
        {
            if(l<=j)
            {
                k++;
                cout<<k;
            }
            else
            {
               k--;
                cout<<k; 
            }
            j++;
        }
        cout<<endl;
        
    }
    
}
