class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        Node *temp=head1;
        int count=0;
        set<int>s;
        while(temp!=NULL)
        {
            s.insert(temp->data);
            temp=temp->next;
        }
        while(head2!=NULL)
        {
            if(s.find(x-head2->data)!=s.end())
            {
                count++;
            }
            head2=head2->next;
        }
        return count;
    }
};
