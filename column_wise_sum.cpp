#include<iostream>
using namespace std;


int main(){
    int arr[1000][1000],m,n;
    cout<<"enter the size of rows and column: ";
    cin>>m>>n;
    cout<<"enter the element in array: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
         	sum =sum+arr[j][i];   
        }
        cout<<sum<<" ";
    }
}