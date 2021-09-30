Input:
L1 = 9->6->4->2->3->8
L2 = 1->2->8->6->2
Output: 1 2 3 4 6 8 9
  
  
struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    map<int,int>m;
    while(head1!=NULL)
    {
        m[head1->data]++;
        head1=head1->next;
    }
    
    while(head2!=NULL)
    {
        m[head2->data]++;
        head2=head2->next;
    }
    
    Node *head=NULL,*temp=NULL;
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(head==NULL)
        {
            head=new Node(it->first);
            temp=head;
        }
        else
        {
            temp->next=new Node(it->first);
            temp=temp->next;
        }
    }
    return head;
}
