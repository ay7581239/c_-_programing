#include<iostream>
int sum(int input[], int n);
using namespace std;


int main(){
    int n;
    cout<<"enter the size array"<<endl;
    cin >> n;
  
    int *input = new int[n];
    cout<<"enter the element in array"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}int sum(int input[], int n) {
  
  static int su = 0;
  if(n==0)
  return 0;
  if (n == 1) {
    su = su + input[0];
    return input[0];
  }
  // su=su+input[0];
  else {
    sum(input + 1, n - 1);
    su = su + input[0];
  }

return su;
}