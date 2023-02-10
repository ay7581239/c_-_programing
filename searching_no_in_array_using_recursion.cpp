#include<iostream>
bool checkNumber(int input[], int size, int x);
using namespace std;


int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin >> n;
  
    int *input = new int[n];
    cout<<"enter the element in array"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    cout<<"enter the element of searchinga"<<endl;
    cin >> x;
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
if (size == 1)
return false;
if (input[0] == x) {
  return true;
}
bool check = checkNumber(input + 1, size - 1, x);
return check;
}