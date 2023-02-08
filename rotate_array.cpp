#include <iostream>
using namespace std;
void rotate(int *input, int d, int n);


int main()
{
	int t;
    cout<<"Enter the no. of times array call :";
	cin >> t;
	
	while (t--)
	{
		int size;
        cout<<"Enter the size of array  :";
		cin >> size;

		int *input = new int[size];
        cout<<"Enter the element of array :";
		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
        cout<<"Enter the position of ratation in array :";
		cin >> d;

		rotate(input, d, size);
        cout<<"After the rotation :";
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}
void rotate(int *input, int d, int n)
{
    //Write your code here
    int i=0,j=n-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    
    i=0, j=n-d-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;  
    }
    
    i=n-d, j=n-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;  
    }
}