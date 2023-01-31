#include <iostream>
using namespace std;
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
        // int n = 0;
        // for (int i = 0; input[i] != '\0'; i++) {
        //   n++;
        // }
        if (input[0] == '\0')
          return;
        if (input[0] != input[1]) {
        //   for (int i = n; i > 0; i--) {
        //     input[i + 1] = input[i];
        //   }
        removeConsecutiveDuplicates(input + 1);
        }
		else{
			int i=1;
			for( ;input[i]!='\0';i++){
				input[i]=input[i+1];
			}
			input[i]='\0';
			removeConsecutiveDuplicates(input);
		}
     

}
int main() {
    char s[100000];
    cout<<"Enter the string "<<endl;
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
// aabccba
// ->abcba
// xxxyyyzwwzzz
// ->xyzwz