#include<iostream>
using namespace std;

int main(){

    char c,l;
    int al=0,dig=0,sym=0,n=0;
    while(c!='$'){
    c=cin.get();n++;
    }int k=0;
    while(k<n)
    {
       k++;
        if(l>=97||l<=122)
            al++;
        else if(l>=1||l<=9)
            dig++;
        else
            sym++;
    }
    cout<<al<<" "<<dig<<" "<<sym;
}
