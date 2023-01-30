#include<iostream>
using namespace std;
void print(int n);

int main(){
    int n;
    cout<<"Enter the no."<<endl;
    cin >> n;
  
    print(n);
}
void print(int n){
    //write your code here
    if (n==1)
      cout<<1<<" ";
    else {
      print(n - 1);
      cout << n << " ";
    }
}
