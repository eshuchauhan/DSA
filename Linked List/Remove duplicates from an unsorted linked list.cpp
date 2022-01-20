Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     if(head==NULL || head->next==NULL) return head;
     unordered_map<int,int>m;
     Node *ans =new Node(-1);
     Node *t=ans;
     while(head!=NULL)
     {
         if(m.find(head->data)==m.end()) 
         {
             t->next=new Node(head->data);
             t=t->next;
         }
         m[head->data]++;
         head=head->next;
     }
     return 
