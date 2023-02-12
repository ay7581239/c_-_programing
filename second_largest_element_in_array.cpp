#include <iostream>
using namespace std;
int findSecondLargest(int *input, int n);
int main()
{
	int t;
    cout<<"Enter the no. of array :";
	cin >> t;
	while (t--)
	{

		int size;
        cout<<"Enter the size of array :";
		cin >> size;
		int *input = new int[size];
        cout<<"Enter the element of array :";
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout <<"Second largest element  : "<<findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}
int findSecondLargest(int *input, int n)
{
 int i=0,j,max=-2147483648,smax=-2147483648;
    while(i<n)
    {
        if(input[i]>max)
        {
            smax=max;
            max=input[i];
        }
        else if(input[i]>smax&&input[i]!=max)
        {
            smax=input[i];
        }
        i++;
    }
    return smax;
}  