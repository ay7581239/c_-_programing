#include <iostream>
void pairStar(char input[]);
using namespace std;

int main() {
   char input[100];
   cout<<"enter the character "<<endl;
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}void pairStar(char input[]) {
    // Write your code here
	int n=0;
	for(int i=0;input[i]!='\0';i++)
	{
		n++;
	}
if(input[0]=='\0')
return ;
if (input[0] == input[1]) {
for(int i=n;i>0;i--)
{
	input[i+1]=input[i];
}
 input[1] = '*';
 
}
        return pairStar(input+1);
      

}