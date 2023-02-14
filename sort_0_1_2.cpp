#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n);

int main()
{
	int t;
    cout<<"Enter the no. of array call:";
	cin >> t;
	while (t--)
	{
		int size;
        cout<<"Enter the size of array :";
		cin >> size;
		int *arr = new int[size];
        cout<<"Enter the element of array :";
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);
        cout<<"sorted array is :";
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}
void sort012(int *arr, int n)
{
    //Write your code here
    int k=0,s=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
           k++;
        else if(arr[i]==1)
           s++;
        else 
            m++;
    }
    int i;
    for( i=0;i<k;i++)
    {
        arr[i]=0;
    }
    for(int j=0;j<s;j++)
    {
        arr[i]=1;
        i++;
    }
    for(int j=0;j<m;j++)
    {
        arr[i]=2;
        i++;
    }
}