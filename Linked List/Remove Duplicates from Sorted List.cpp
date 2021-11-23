/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode *temp,*nextnode;
        temp=head;
        if(head==NULL)
        {
            return NULL;
        }
        while(temp->next!=NULL)
        {
            nextnode=temp->next;
            if(temp->val==nextnode->val)
            {
                temp->next=nextnode->next;
            }
            else
            {
                temp=temp->next;
            }
        }
        return head;
    }
};
