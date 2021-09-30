class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *fast=head,*slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                Node *temp=head;
                if(slow==head)
                {
                    while(temp->next!=head)
                    {
                        temp=temp->next;
                    }
                    temp->next=NULL;
                    return;
                }
                
                else if(slow==fast)
                {
                    while(temp->next!=slow->next)
                    {
                    slow=slow->next;
                    temp=temp->next;
                    }
                
                slow->next=NULL;
                return;
                }
            }
            
        }
    }
};


