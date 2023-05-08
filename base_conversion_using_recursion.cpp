#include<iostream>
using namespace std;
string base(int n){
    if(n==0)return "";
    return base(n/2)+to_string(n%2);
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<base(n)<<endl;
    }return 0;
}