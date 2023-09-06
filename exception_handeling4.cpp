//nested try
#include <iostream>
using namespace std;
int main() {
 try {
 try {
 throw 20;
 } catch (int n) {
 cout << "Inner catch " << endl;
 throw; //Re-throwing an exception
 }
 } catch (int n) {
 cout << "Outer catch" << endl;
 }}