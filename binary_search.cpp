#include <iostream>
using namespace std;
int binarySearch(int *input, int n, int val);


int main()
{

	int size;
    cout<<"Enter the size of array :";
	cin >> size;
	int *input = new int[size];
    cout<<"Enter the element of array :";
	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
    cout<<"Enter the no. of digit search :";
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}
int binarySearch(int *input, int n, int val)
{
    //Write your code here
    
    int str=0,end=n-1;
    while(str<=end){
        int mid=(str+end)/2;
        if(input[mid]==val)
            return mid;
        else if(val>input[mid])
            str=mid+1;
        else
            end=mid-1;
    }
    return -1;
}