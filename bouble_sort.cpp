#include <iostream>
using namespace std;

void bubbleSort(int *input, int n);

int main()
{

	int t;
    cout<<"Enter no.array call:";
	cin >> t;
	while (t--)
	{
		int size;
        cout<<"Enter size of array :";
		cin >> size;

		int *input = new int[size];
        cout<<"Enter element in array :";
		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);
        cout<<"sorted array are:";
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}


void bubbleSort(int *input, int n)
{
    //Write your code here
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(input[i]<=input[j])
            {
                int temp=input[i];
                input[i]=input[j];
                input[j]=temp;
            }

        }
    }
}