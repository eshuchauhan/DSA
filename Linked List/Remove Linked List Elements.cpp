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
    ListNode* removeElements(ListNode* head, int x) {
        while(head!=NULL && head->val==x)
        {
            head=head->next;
        }
        ListNode *temp=head,*nextnode;
        
        while(head!=0 && temp->next!=NULL)
        {
            nextnode=temp->next;
            if(nextnode->val==x)
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
