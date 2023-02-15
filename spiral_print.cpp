#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols);

int main()
{
    int t;
    cout<<"Enter the no. array want :";
    cin >> t;
    while (t--)
    {

        int row, col;
        cout<<"Enter the no. rows and column :";
        cin >> row >> col;
        int **matrix = new int *[row];
        cout<<"Enter the element in array :";
        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    if (nRows==1)
    {
       for(int i=0;i<nRows;i++){
       for(int j=0;j<nCols;j++)
       {
           cout<<input[i][j]<<" ";
       }break;
   }
   } 
    else if (nCols==1)
    {
       
       for(int i=0;i<nCols;i++)
    {
        for(int j=0;j<nRows;j++)
        {
            cout<<input[j][i]<<" ";
        }break;
    }
    }
    else{
    for(int k=0;k<nRows/2+1;k++)
    {
   for(int i=k;i<nRows-k;i++){
       for(int j=k;j<nCols-k;j++)
       {
           cout<<input[i][j]<<" ";
       }break;
   }
    for(int i=nCols-1-k;i>=0+k;i--)
    {
        for(int j=1+k;j<nRows-k;j++)
        {
            cout<<input[j][i]<<" ";
        }break;
    }
    for(int i=nRows-1-k;i>=0+k;i--)
    {
        for(int j=nCols-2-k;j>=0+k;j--)
        {
            cout<<input[i][j]<<" ";
        }break;
    }
    for(int i=k;i<nCols-k;i++)
    {
        for(int j=nRows-2-k;j>0+k;j--)
        {
            cout<<input[j][i]<<" ";
        }break;
    } 
    } 
    }
}