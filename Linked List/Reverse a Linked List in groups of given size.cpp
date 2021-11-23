class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
         int cnt=0;
        node *cur=head,*prev=NULL,*next=NULL;
        while(cur and cnt<k)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            cnt++;
        }
        if(next)
            head->next=reverse(next,k);
        return prev;
    }
};
