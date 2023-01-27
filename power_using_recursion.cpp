#include<iostream>
int power(int x, int n);
using namespace std;


int main(){
    int x, n;
    cout<<"enter the base and power"<<endl;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}
int power(int x, int n) {
  if(n==0)
  return 1;
if(n==1)
return x;
n--;
return x*power(x,n);
}