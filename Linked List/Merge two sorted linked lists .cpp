Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *dummy=new Node(-1);
    Node *result=dummy;
    
    if(head1==NULL)return head2;
    if(head2==NULL)return head1;
    
    while(head1!=NULL and head2!=NULL)
    {
        if(head1->data<=head2->data)
        {
            result->next=head1;
            head1=head1->next;
        }
        else if(head2->data<head1->data)
        {
            result->next=head2;
            head2=head2->next;
        }
        result=result->next;
    }
    if(head1!=NULL)
    {
        result->next=head1;
        result=result->next;
    }
    if(head2!=NULL)
    {
        result->next=head2;
        result=result->next;
    }
     return dummy->next;
} 
