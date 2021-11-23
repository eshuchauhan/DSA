/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        ListNode *slow=head,*fast=head,*temp=head;
        while(fast!=0 && fast->next!=0)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                break;
            }
        }
        if(fast==NULL || fast->next==NULL)
        {
            return NULL;
        }
        while(temp!=fast)
        {
            temp=temp->next;
            fast=fast->next;
        }
        return temp;
    }
};
