#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output ,int size3)
{
    //Write your code here
    if(size2==0)
    { 
        int l=0;
        for(int h=-1;h<size1;h++)
        {
         	output[l]=input1[h];
            l++;
        }
    }
   else
       if(size1==0)
    { 
        int l=0;
        for(int h=-1;h<size2;h++)
        {
         	output[l]=input2[h];
            l++;
        }
    }
   
    else
        if(size1>size2)
    {
    int i=size1,j=size2,k=size1+1,f=0,ou,a[20];
    while(i>=0)
    {
        
        
            int temp=input1[i];
            int te=input2[j];
            ou=temp+te+f;
            f=ou/10;
            ou=ou%10;
            
            output[k]=ou;
             k--;
         j--;
      i--;
    }
    output[k]=f;
     k--;
    }
    else
          {
    int i=size1,j=size2,k=size2+1,f=0,ou,a[20];
    while(j>=0)
    {
        
        
            int temp=input1[i];
            int te=input2[j];
            ou=temp+te+f;
            f=ou/10;
            ou=ou%10;
            
            output[k]=ou;
             k--;
         j--;
      i--;
    }
    output[k]=f;
     k--;
  }
}

int main()
{
	int t;
    cout<<"Enter the no. of array call :";
	cin >> t;

	while (t--)
	{
		int size1;
        cout<<"Enter the size of array 1 :";
		cin >> size1;

		int *input1 = new int[size1];
        cout<<"Enter the element of array 1 :";
		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
        cout<<"Enter the size of array 2 :";
		cin >> size2;

		int *input2 = new int[size2];
        cout<<"Enter the element of array 2 :";
		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		// int *output = new int[outsize];
    	int output[outsize];
		sumOfTwoArrays(input1, size1, input2, size2, output , outsize);
        cout<<"sum of two array is :";
		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		//delete[] output;
		cout << endl;
	}

	return 0;
}
