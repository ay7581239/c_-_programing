#include <iostream>
using namespace std;
#include <vector>
#include<stack>
vector<int> nextGreaterElement(vector<int> input) {
	// Write your code here
stack<int>v;
for(int i=input.size()-1;i>=0;i--)
{
	if(v.empty())
	{
		v.push(input[i]);
		input[i]=-1;
		
	}
	else{
          if (input[i] <v.top()) {
			        int k=input[i];
              input[i] = v.top();
			        v.push(k);
          } 
          else {
			             int k=input[i];
                    while (!v.empty()) {
                    if (input[i] < v.top()) {
                      input[i] = v.top();
                     break;
                    }
                    else
                        v.pop();
                       }
                       if(v.empty())
	                      {
	                      	input[i]=-1;
                      	}
                   v.push(k);
                 }
        }
}return input;
}


int main() {
    int size, temp;
    cin >> size;

    vector<int> input;

    for(int i = 0; i < size; i++) {
	cin >> temp;
        input.push_back(temp);
    }

    vector<int> output = nextGreaterElement(input);
    for(int i = 0; i < output.size(); i++) {
	    cout << output[i] << " ";
    }
}//like 3  8  1  2  0 =>> 8 -1  2 -1 -1