struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node *temp=head;
    while(temp!=NULL && temp->next!=NULL)
    {
        int x=temp->data;
        temp->data=temp->next->data;
        temp->next->data=x;
        temp=temp->next->next;
    }
    return head;
}
