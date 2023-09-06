//generic catch block: catch(..){   }
#include<iostream>
using namespace std;
int main() {
 try {
 throw 10;
 } catch (char c) {
 cout << "character type exception" << endl;
  } catch(...) {
  cout << "Default Exception" << endl;
}}