#include <iostream>
using namespace std;
void insertionSort(int *input, int size);


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
		int *input = new int[size];
        cout<<"Enter the element of array :";
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		insertionSort(input, size);
        cout<<"The sorted array is :";
		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}
void insertionSort(int *input, int size)
{
    //Write your code here
   
	for(int i=1;i<size;i++)
    {
         int temp=input[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
    
            if(temp<=input[j])
            {
                
                input[j+1]=input[j];
              
            }
            else
            {
                break;
            }
            
        }
        
        input[j+1]=temp;
    }
   
  
}