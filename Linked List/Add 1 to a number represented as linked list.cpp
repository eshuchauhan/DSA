Node *reverse(Node *head)
{
    Node *temp=head,*nextnode=NULL,*prevnode=NULL;
    while(temp!=NULL)
    {
        nextnode=temp->next;
        temp->next=prevnode;
        prevnode=temp;
        temp=nextnode;
    }
    return prevnode;
}
class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        if(head==NULL) return head;
        head=reverse(head);
        Node *temp=head;
        int carry=1,sum=0;
        while(temp!=NULL)
        {
            sum=carry+temp->data;
            if(sum<=9)
            {
                temp->data=sum;
                carry=0;
            }
            else if(sum==10)
            {
                temp->data=0;
                carry=1;
            }
            temp=temp->next;
        }
        head=reverse(head);
        if(carry==1)
        {
            Node *x=new Node(1);
            x->next=head;
            head=x;
        }
        return head;
    }
};
