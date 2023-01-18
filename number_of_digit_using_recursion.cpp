#include<iostream>
int count(int n);
using namespace std;


int main(){
    int n;
    cout<<"enter the no."<<endl;
    cin >> n;
  
    cout << count(n) << endl;
}int count(int n){
    //write your code here
   static int c=0;
   if(n/10==0)
  return 1;
   else {
     n = n / 10;
     c++;
     count(n);
   }
    return c+1;
}