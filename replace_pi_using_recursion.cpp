#include <iostream>
void replacePi(char input[]);
using namespace std;

int main() {
    char input[10000];
    cout<<"enter the character"<<endl;
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
void replacePi(char input[]) {
	// Write your code here
	int n=0;
	for(int i=0;input[i]!='\0';i++)
	{
		n++;
	}
if(input[0]=='\0')
return ;
if (input[0] == 'p'&&input[1]=='i') {
for(int i=n;i>0;i--)
{
	input[i+2]=input[i];
}
 input[0] = '3';
 input[1] = '.';
 input[2] = '1';
 input[3] = '4';
}
        return replacePi(input+1);
      
}