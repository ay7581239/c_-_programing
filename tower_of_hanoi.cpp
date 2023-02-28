#include <iostream>
using namespace std;
void towerOfHanoi(int n, char source, char auxiliary, char destination);

int main() {
    int n;
    cout<<"enter the no. of plate"<<endl;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Write your code here
    if (n==1) {
     cout << source << " " <<destination<< endl;
      return;
    }if(n==0)
    return;
towerOfHanoi(n-1,source,destination,auxiliary);
cout<<source<<" "<<destination<<endl;
towerOfHanoi(n-1,auxiliary,source,destination);
}