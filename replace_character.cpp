#include <iostream>
#include <cstring>
using namespace std;

void replaceCharacter(char input[], char c1, char c2);

int main() {
    char input[1000000];
    char c1, c2;
    cout<<"enter the string :";
    cin >> input;
    cout<<"enter the character which you want to change & put character :";
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
void replaceCharacter(char input[], char c1, char c2) {
    // Write your code here
    int n=0,i,j;
    for(i=0;input[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
        if(input[i]==c1)
            input[i]=c2;
    }
}