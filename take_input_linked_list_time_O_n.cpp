#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
    
};
void print1(node*head1)
    {
        while(head1!=NULL){
        cout<<head1->data<<endl;
        head1=head1->next;}
    }
node *takeinput()
{
    int data;
    cout<<"Enter the data(-1 for exit)"<<endl;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    while(data!=-1)
    {
        node*newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;            //tail=tail->next;
        }
        cout<<"Enter the data(-1 for exit)"<<endl;
        cin>>data;
    }return head;
}
int main()
{
    //node p;
    node*head=takeinput();
    print1(head);
    return 0;
}