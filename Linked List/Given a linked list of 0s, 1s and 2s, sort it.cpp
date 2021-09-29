class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here

        Node *zero1=new Node(-1);
        Node *zero=zero1;
        
        Node *one1=new Node(-1);
        Node *one=one1;
        
        Node *two1=new Node(-1);
        Node *two=two1;
        
        Node *temp=head;
        
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                zero1->next=temp;
                zero1=zero1->next;
            }
            else if(temp->data==1)
            {
                one1->next=temp;
                one1=one1->next;
            }
            else if(temp->data==2)
            {
                two1->next=temp;
                two1=two1->next;
            }
            temp=temp->next;
        }
        
        two1->next=NULL;
        one1->next=two->next;
        zero1->next=one->next;
        
        return zero->next;
        
    }
};
