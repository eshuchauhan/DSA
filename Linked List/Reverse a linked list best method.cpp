class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head==NULL and head->next==NULL)
        {
            return head;
        }
        Node *result=NULL;
        
        while(head!=NULL)
        {
            Node *x=head;
            head=head->next;
            x->next=result;
            result=x;
        }
    }
    
};
