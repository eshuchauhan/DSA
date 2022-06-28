#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    
    int data;
    Node* prev;
    Node* next;
    
    // construtor
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void deleteNode(Node* &head, Node* &tail, int pos)
{
    if(pos==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=head->next;
        temp->next=NULL;
        free(temp);
        return;
    }
    
    Node* prev=0,*temp=head;
    
    int count=0;
    
    while(count<pos)
    {
        prev=temp;
        temp=temp->next;
        count++;
    }
    
    temp->prev=NULL;
    prev->next=temp->next;
    temp->next=NULL;
}

void insertAtHead(Node* &head, Node* &tail, int d)
{
    if(head==NULL)
    {
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp=new Node(d);
    
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node* &tail, Node* &head, int d)
{
   if(tail==NULL)
   {
       Node* temp=new Node(d);
       tail=temp;
       head=temp;
       return;
   }
   Node* temp=new Node(d);
   tail->next=temp;
   temp->prev=tail;
   temp->next=NULL;
   tail=temp;
}

void insertAtMiddle(Node* &head, Node* &tail, int d, int position)
{
    if(position==1)
    {
        insertAtHead(head,tail,d);
        return;
    }
    
    Node* newnode=new Node(d);
    
    Node* temp=head;
    
    int count=1;
    
    while(count<position-1)
    {
        count++;
        temp=temp->next;
    }
    
    if(temp->next==NULL)
    {
        insertAtTail(tail,head,d);
        return;
    }
    
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}

void getLength(Node* &head)
{
   Node* temp=head;
   int count=0;
   while(temp!=NULL)
   {
       temp=temp->next;
       count++;
   }
   cout<<count<<endl;
   cout<<endl;
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
    
    Node* head=node1;
    Node* tail=node1;
    
    insertAtTail(tail,head,20);
    insertAtTail(tail,head,30);
    
    insertAtMiddle(head,tail,100,4);
    
    print(head);
}
