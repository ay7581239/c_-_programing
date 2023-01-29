#include <iostream>
#include <cstring>
using namespace std;
void printSubstrings(char input[]);


int main() {
    int size = 1e6;
    char str[size];
    cout<<"enter the string :";
    cin >> str;
    printSubstrings(str);
}
void printSubstrings(char input[]) {
    // Write your code here
       int n=0,i,j=0;
    string s;
    for(i=0;input[i]!='\0';i++)
    {
        n++;
    }
  
    
    for(int k=0;k<n;k++){
     for(i=0;i<n;i++)
    {
        for(j=k;j<=i;j++)
        {
          cout<<input[j];
            
        }
        cout<<endl;
    }
   }
	
}