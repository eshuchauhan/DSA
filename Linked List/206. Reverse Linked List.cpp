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
    ListNode* reverseList(ListNode* head) {
        ListNode *prevnode=0,*currentnode=head,*nextnode=head;
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
