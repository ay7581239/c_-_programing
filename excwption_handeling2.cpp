//after trow we are not return trow keyword place for execution forther code
#include <iostream>
using namespace std;
int main() {
 int x = -1;
 cout << "Before try" << endl;
 try{
 cout << "Inside try \n";
 if (x < 0) {
 throw x;
 cout << "After throw" << endl;
 }
 } catch(int x) {
 cout << "Exception Caught" << endl;
 }
 cout << "After catch" << endl;
}