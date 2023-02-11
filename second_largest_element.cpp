#include <iostream>
using namespace std;
int findSecondLargest(int input[], int size);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

// 		delete[] input;
	}

	return 0;
}
int findSecondLargest(int *input, int n)
{
    //Write your code here
     int i,f=0;
	for( i=1;i<n;i++)
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
    }if(n<1)
   return -2147483648;
    else
    { 
      for(i=n-2;i>=0;i--)
      {
          f=0;
          if(input[i]==input[i+1])
          {
              f=1;
              continue;
          }
          else 
              break;
              
      }
        if(f==1)
            return -2147483648;
        else
            return input[i];
    } 
}
