Input:
LinkedList1: 9->6->4->2->3->8
LinkedList2: 1->2->8->6
Output: 6 2 8

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        
        map<int,int>m;
        while(head1!=NULL)
        {
            m[head1->data]++;
            head1=head1->next;
        }
        Node *head=NULL;
        Node *temp=NULL;
        while(head2!=NULL)
        {
            if(m.find(head2->data)!=m.end())
            {
                if(head==NULL)
                {
                    head=new Node(head2->data);
                    temp=head;
                }
                else
                {
                    temp->next=new Node(head2->data);
                    temp=temp->next;
                }
            }
        }
        return head;
    }
};
