class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* middle(Node *head)
    {
        if(head==NULL || head->next==NULL) return head;
        Node *slow=head,*fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    Node* Merge(Node* head1, Node* head2)  {  

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

    Node* mergesort(Node* head) {
        
        if(head==NULL || head->next==NULL) return head;
        
        Node* mid=middle(head);
        
        Node* a=head;
        Node* b=mid->next;
        
        mid->next=NULL;
        
        a=mergeSort(a);
        b=mergeSort(b);
        
        Node *c=Merge(a,b);
        
        return c;
    }
    Node* mergeSort(Node* head) {
        if(head==NULL || head->next==NULL) return head;
        return mergesort(head);
    }
};
