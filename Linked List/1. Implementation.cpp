#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    
    int data;
    Node* next;
    
    // construtor
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

void deleteNode(Node* &head, Node* &tail, int pos)
{
    if(pos==1)
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return;
    }
    
    Node* prev=0,*temp=head;
    int count=1;
    
    while(count<pos)
    {
        prev=temp;
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL)
    {
        prev->next=NULL;
        tail=prev;
        return;
    }
    prev->next=temp->next;
    temp->next=NULL;
    free(temp);
}

void insertAtHead(Node* &head, int d)
{
    // new node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail, int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtMiddle(Node* &head, Node* &tail, int d, int position)
{
    if(position==1)
    {
        insertAtHead(head,d);
        return;
    }
    Node* newnode=new Node(d);
    int count=1;
    
    Node* temp=head;
    
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
    
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    
    newnode->next=temp->next;
    temp->next=newnode;
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1=new Node(10);
    
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    
    Node* head=node1;
    Node* tail=node1;
    
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    
    // insertAtMiddle(head,tail,50,4);
    
    deleteNode(head,tail,3);
    
    print(head);
    
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;
}
