#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size);

int main()
{

	int t;
    cout<<"Enter the no. of times of array call :";
	cin >> t;
	while (t--)
	{

		int size;
        cout<<"Enter the size of array  :";
		cin >> size;
		int *input = new int[size];
        cout<<"Enter the element of times of array  :";
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
        cout<<"the position of array rotation is :";
		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}
int arrayRotateCheck(int *input, int size)
{
   //Write your code here
      int i=0,small,c=0;
    small=input[0];
    for(i=0;i<size;i++)
    {
        if(small>=input[i])
        {
            small=input[i];
            c++;
        }
    }
    return(c);
}


