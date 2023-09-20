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
int main()
{
    treenode<int>*root=new treenode <int>(1);
    treenode<int>*node1=new treenode <int>(2);
    treenode<int>*node3=new treenode <int>('a');
    treenode<int>*node2=new treenode <int>(3);
    treenode<int>*node4=new treenode <int>(4);
    treenode<int>*node5=new treenode <int>(5);
    root->children.push_back(node1);
     root->children.push_back(node2);
     root->children.push_back(node3);
     node1->children.push_back(node4);
     node4->children.push_back(node5);
     print(root);
}