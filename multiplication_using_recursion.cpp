#include <iostream>
int multiplyNumbers(int m, int n);
using namespace std;

int main() {
    int m, n;cout << "enter the multipicand & multiplier" << endl;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}int multiplyNumbers(int m, int n) {
    // Write your code here
    if(m==0){
        return 0;
    }
    return n + multiplyNumbers(m - 1, n);
}