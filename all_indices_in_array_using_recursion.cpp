#include<iostream>
int getindex(int *input,int st,int end,int x,int *output,int i);
int allIndexes(int input[], int size, int x, int output[]);
using namespace std;


int main(){
    int n;
    cout <<"enter the size of array"<< endl;
    cin >> n;
  
    int *input = new int[n];
    cout <<"enter the element in  array"<< endl;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    cout <<"enter the element whose index you want to find array"<< endl;
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}int getindex(int *input,int st,int end,int x,int *output,int i)
{
  if(st>end){
    return i;
  }

if(input[st]==x){
  output[i++]=st;
  return getindex(input,st+1,end,x,output,i);
}
return getindex(input, st + 1, end, x, output, i);
}
int allIndexes(int input[], int size, int x, int output[]) {
return getindex(input,0,size-1,x,output,0);

}