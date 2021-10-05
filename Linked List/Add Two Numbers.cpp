class Solution {
public:
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        
        ListNode *temp=new ListNode(-1);
        ListNode *dummy=temp;
        int carry=0;
        while(head1!=NULL || head2!=NULL || carry!=0)
        {
            int sum=0;
            if(head1!=NULL)
            {
                sum=sum+head1->val;
                head1=head1->next;
            }
            
            if(head2!=NULL)
            {
                sum=sum+head2->val;
                head2=head2->next;
            }
            
            sum=sum+carry;
            
            carry=sum/10;
            
            temp->next=new ListNode(sum%10);
            
            temp=temp->next;
        }
        return dummy->next;
            
    }
};
