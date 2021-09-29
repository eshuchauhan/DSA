class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
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
};
    
