#include <iostream>
using namespace std;
void replaceCharacter(char input[], char c, char d) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
   
    if (input[0] == '\0')
      return;
    if (input[0] != c) {

      replaceCharacter(input + 1,c,d);
    } else {
      input[0]= d;
      replaceCharacter(input,c,d);
    }
}
int main() {
    char input[1000000];
    char c1, c2;
    cout<<"Enter the string : "<<endl;
    cin >> input;
    cout<<"Enter the character which want to you replace & by: "<<endl;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}

// for example:
// abacd
// a x
// ->xbxcd