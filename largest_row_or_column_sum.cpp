#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols);

int main()
{
	int t;
    cout<<"enter the no. of times taken :";
	cin >> t;
	while (t--)
	{
		int row, col;
        cout<<"enter the no. of rows & column  :";
		cin >> row >> col;

		int **input = new int *[row];
        cout<<"enter the element :";
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}
void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    int rmax=-2147483648,cmax=-2147483648;
    int r=0,c=0;
    int i,j,sum;
    for(i=0;i<nRows;i++){
        sum=0;
        for(j=0;j<mCols;j++){
            sum += input[i][j];
        }
        if(rmax<sum){
            rmax=sum;
            r=i;
        }
    }
    
    
    for(i=0;i<mCols;i++){
        sum=0;
        for(j=0;j<nRows;j++){
         	sum += input[j][i];   
        }
        if(cmax<sum){
            cmax=sum;
            c=i;
        }
    }
    
    if(rmax>cmax){
        cout<<"row "<<r;
        cout<<" "<<rmax<<endl;
    }
    else if(cmax>rmax){
        cout<<"column "<<c;
    	cout<<" "<<cmax<<endl;
    }
    else{
        cout<<"row "<<r;
        cout<<" "<<rmax<<endl;
        
    }
}