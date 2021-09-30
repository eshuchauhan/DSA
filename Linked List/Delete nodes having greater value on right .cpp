// Input:
// LinkedList = 12->15->10->11->5->6->2->3
// Output: 15 11 6 3
// Explanation: Since, 12, 10, 5 and 2 are
// the elements which have greater elements
// on the following nodes. So, after deleting
// them, the linked list would like be 15,
// 11, 6, 3.


#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* reverseList(Node* head) {
    Node *prevnode=0,*currentnode=head,*nextnode=head;
    while(nextnode!=NULL)
    {
        nextnode=currentnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
    return head;
}

class Solution
{
    public:
    Node *compute(Node *head)
    {
        if(head==NULL || head->next==NULL)
        return head;
        head=reverseList(head);
        Node *temp=new Node(-1);
        Node *t=temp;
        while(head!=NULL)
        {
            if(head->data >=temp->data)
            {
                temp->next=new Node(head->data);
                temp=temp->next;
            }
            head=head->next;
        }
        
        t=t->next;
        t=reverseList(t);
        return t;
        
        
        // Node*temp=head;
        // while(temp!=NULL)
        // {
        //     if(temp->next!=NULL && temp->data > temp->next->data)
        //     {
        //         temp->next=temp->next->next;
        //         temp=temp->next;
        //     }
        //     else 
        //     temp=temp->next;
        // }
        // head=reverseList(head);
        // return head;
    }
};
   
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
		
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends
