Node* Merge(Node* head1, Node* head2)  
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
            result->bottom=head1;
            head1=head1->bottom;
        }
        else if(head2->data<head1->data)
        {
            result->bottom=head2;
            head2=head2->bottom;
        }
        result=result->bottom;
    }
    if(head1!=NULL)
    {
        result->bottom=head1;
    }
    else if(head2!=NULL)
    {
        result->bottom=head2;
    }
     return dummy->bottom;
} 
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL) return root;
   
   root->next=flatten(root->next);
   root=Merge(root,root->next);
   return root;
}
