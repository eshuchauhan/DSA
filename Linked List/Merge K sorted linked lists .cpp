Node * mergeKLists(Node *a[], int k)
    {
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<k;i++)
        {
            Node *x=a[i];
            while(x!=NULL)
            {
                q.push(x->data);
                x=x->next;
            }
        }
        Node* temp=new Node(-1);
        Node* ans=temp;
        while(q.size()>0)
        {
            temp->next=new Node(q.top());
            q.pop();
            temp=temp->next;
        }
        return ans->next;
    }
