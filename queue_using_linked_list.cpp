#include<iostream>
using namespace std;
template<typename t>
class Node{
    public:
    t data;
    Node<t> *next;
    Node(t data){
        this->data=data;
        next=NULL;
    }
};
template<typename t>
class queue{
    Node<t> *head;
    Node<t>*tail;
    int size;
    public:
    queue()
    {
        head=NULL;
        tail=NULL;
        size=0;
    }
    void enqueue(t da)
    {
        Node<t> *temp= new Node<t>(da);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
           tail= temp;
        }
        //temp->next=NULL;
            size++;
    }
    t dequeue(){
        if(head==NULL||head==tail){
        return 0;
        }
        t headdata=head->data;
        head=head->next;
        size--;
        return headdata;
    }
    int getsize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
    t front()
    {
        if(head==NULL)
        return 0;
        return head->data;
    }
};
int main(){
    queue<int>t1;
    t1.enqueue(1);
    t1.enqueue(2);
    t1.enqueue(3);
    t1.enqueue(4);
    t1.enqueue(5);
    cout<<t1.getsize()<<endl;
    cout<<t1.dequeue()<<endl;
    cout<<t1.getsize()<<endl;
    cout<<t1.front()<<endl;
    cout<<t1.getsize()<<endl;
    cout<<t1.isEmpty()<<endl;
}