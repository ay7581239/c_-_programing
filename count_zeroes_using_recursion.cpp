#include <iostream>
int countZeros(int n);
using namespace std;

int main() {
    int n;
    cout<<"enter the number"<<endl;
    cin >> n;
    cout << countZeros(n) << endl;
}
int countZeros(int n) {
    // Write your code here
    static int c = 0;
    if(n==0)
    return 1;
    if (n <=9&&n>0)
      return c;
      if (n % 10 == 0) {
        c++;
      }
      n = n / 10;
      int m = countZeros(n);
      return m;
      return c;
}