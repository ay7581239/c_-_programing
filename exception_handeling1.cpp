#include<iostream>
using namespace std;
int main() {
 int n1, n2;
 try {
 cout << "Enter two nos:";
 cin >> n1 >> n2;
 if (n2 == 0)
 throw 'E';
 else
 throw n1/n2;
 }catch (char s) {
 cout << s<<" ";
 }
 catch (int ans){
 cout << ans<<" ";
 }
 cout << "Done";
}