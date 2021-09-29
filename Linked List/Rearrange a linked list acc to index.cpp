// Input:
// LinkedList: 1->2->3->4
// Output: 1 3 2 4 
// Explanation: 
// Odd elements are 1, 3 and even elements are 
// 2, 4. Hence, resultant linked list is 
// 1->3->2->4.
  
  class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       Node *temp=head;
       
       Node *even=new Node(-1);
       Node *e=even;
       
       Node *odd=new Node(-1);
       Node *o=odd;
       
       int i=1;
       
       while(temp!=NULL)
       {
           if(i%2==1)
           {
               odd->next=temp;
               odd=odd->next;
           }
           else if(i%2==0)
           {
               even->next=temp;
               even=even->next;
           }
           temp=temp->next;
           i++;
       }
       
       even->next=NULL;
       odd->next=e->next;
       
       head=o->next;
    }
};
