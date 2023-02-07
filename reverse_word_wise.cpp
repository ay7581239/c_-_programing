#include <iostream>
using namespace std;
void reverseStringWordWise(char input[]);
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
void reverseStringWordWise(char input[]) {
    // Write your code here
  int n=0;
    for(int i=0;input[i]!='\0';i++)
    {
        n++;
    }
    int m=n;
   int i=0,j=n-1;
    while(i<j)
    {
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    int r,s;
    j=0;
    for(r=0;r<n+1;r++)
   {
 
        
    if(input[r]==' '||input[r]=='\0')
    {
        s=r-1;
    while(j<s)
    {
        char temp=input[j];
        input[j]=input[s];
        input[s]=temp;
        j++;
        s--;
    }
    r=r+1;
    }
     }
    
}