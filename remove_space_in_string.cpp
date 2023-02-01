#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]);

int main() {
    char input[1000000];
    cout<<"enter the sentence:";
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
void trimSpaces(char input[]) {
    // Write your code here
      int n=0,i,j=0;
    for(i=0;input[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
        if(input[i]!=' ')
        {
            input[j]=input[i];
            j++;
        }   
    }
    while(j<=n)
    {
        input[j]='\n';
        j++;
    }

}