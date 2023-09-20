#include<bits/stdc++.h>
using namespace std;
template<typename t>
class treenode{
    public:
    t data;
    vector<treenode<t>*>children;
    treenode( t data)
    {
        this->data=data;
    }
};
void print(treenode<int>*root)
{
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" ";
    }cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }
}
treenode<int>*takeinput()
{
    int rootdata;
    cout<<"enter the data "<<endl;
    cin>>rootdata;
    treenode<int>*root=new treenode<int>(rootdata);
    int n;
    cout<<"enter the no. of children "<<rootdata<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        treenode<int>*child=takeinput();
        root->children.push_back(child);
    }
}
int main()
{
    treenode<int>*root=takeinput();
     print(root);
}