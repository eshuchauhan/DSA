  Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *prevnode=0,*currentnode=head,*nextnode=head;
        while(nextnode!=NULL)
        {
            nextnode=currentnode->next;
            currentnode->next=prevnode;
            prevnode=currentnode;
            currentnode=nextnode;
        }
        head=prevnode;
        return head;
    }
    
Node *merge(Node *head1, Node*head2)
{
    Node *x=new Node(-1);
    Node *temp1=head1;
    Node *temp2=head2;
    
    Node *ans=x;
    
    bool flag=0;
    
    while(temp1!=NULL && temp2!=NULL)
    {
        if(flag==0)
        {
            ans->next=temp1;
            ans=ans->next;
            
            temp1=temp1->next;
            flag=1;
        }
        else if(flag==1)
        {
            ans->next=temp2;
            ans=ans->next;
            
            temp2=temp2->next;
            flag=0;
        }
    }
    
    while(temp2!=NULL)
    {
        ans->next=temp2;
        ans=ans->next;
        temp2=temp2->next;
    }
    x=x->next;
    return x;
}

void reorderList(Node* head) {
    if(head==NULL || head->next==NULL)
    {
        return;
    }
    
    Node *slow=head,*fast=head,*prev=head;
    
    // find middle
    
    while(fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    
    prev->next=NULL;
    Node *l1=head;
  
  // reverse
    Node *l2=reverseList(slow);
    
    // merge
    
    merge(l1,l2);
    
}

