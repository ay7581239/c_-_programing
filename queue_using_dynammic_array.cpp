#include<bits/stdc++.h>
using namespace std;
template <typename T> 
class Queue {
T *data;
int nextIndex;
int firstIndex; 
int size; 
int capacity;
public :
Queue(int s) { 
data = new T[s];
nextIndex = 0;
firstIndex = -1;
size = 0;
capacity = s;
}
int getSize() { 
return size;
}
bool isEmpty() { 
return size == 0;
}
void enqueue(T element) {
if(size == capacity) { 
T *newData = new T[2 * capacity]; 
int j = 0;
for(int i = firstIndex; i < capacity; i++) { 
newData[j] = data[i];
j++;
}
for(int i = 0; i < firstIndex; i++) {
newData[j] = data[i];
j++;
}
delete [] data;
data = newData;
firstIndex = 0;
nextIndex = capacity;
capacity *= 2; 
}
data[nextIndex] = element;
nextIndex = (nextIndex + 1) % capacity ;
if(firstIndex == -1) {
firstIndex = 0;
}
size++;
}
T front() { 
if(isEmpty()) { 
cout << "Queue is empty ! " << endl;
return 0;
}
return data[firstIndex]; 
}
T dequeue() {
if(isEmpty()) {
cout << "Queue is empty ! " << endl;
return 0;
}
T ans = data[firstIndex];
firstIndex = (firstIndex + 1) % capacity;
size--;
if(size == 0) {
firstIndex = -1;
nextIndex = 0;
}
return ans;
}
};
int main(){
    Queue<int>t1(6);
    t1.enqueue(1);
    t1.enqueue(2);
    t1.enqueue(3);
    t1.enqueue(4);
    t1.enqueue(5);
    cout<<t1.getSize()<<endl;
    cout<<t1.dequeue()<<endl;
    cout<<t1.getSize()<<endl;
    cout<<t1.front()<<endl;
    cout<<t1.getSize()<<endl;
    cout<<t1.isEmpty()<<endl;
}