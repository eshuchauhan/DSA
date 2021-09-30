class Solution{
  public:
  
        Node* reverseList(Node *head)
        {
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
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head->next==NULL)
        {
            return true;
        }
        
        // find middle
        
        Node *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverseList(slow->next);
        slow=slow->next;
        
        while(slow!=NULL)
        {
            if(head->data!=slow->data)
            {
                return false;
            }
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
