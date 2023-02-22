#include <iostream>
int sumOfDigits(int n);
using namespace std;

int main() {
   int n;
   cout<<"enter the no."<<endl;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}int sumOfDigits(int n) {
    // Write your code here
    int c = 1;
    if (n == 0)
      return 0;
      return (n % 10+sumOfDigits(n/10));
}