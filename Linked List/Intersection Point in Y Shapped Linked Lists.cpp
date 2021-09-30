// Input:
// LinkList1 = 3->6->9->common
// LinkList2 = 10->common
// common = 15->30->NULL
// Output: 15
// Explanation:

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node*temp1=head1,*temp2=head2;
    if(head1==NULL || head2==NULL)
    {
        return -1;
    }
    
    while(temp1!=temp2)
    {
        (temp1==NULL)?temp1=head2:temp1=temp1->next;
        (temp2==NULL)?temp2=head1:temp2=temp2->next;
    }
    return temp2->data;
}
