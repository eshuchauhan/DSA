#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        Node *dummy=new Node(-1);
        
        dummy->next=head;
        
        Node *current=dummy;
        Node *prev=NULL;
        
        for(int i=0;i<m;i++)
        {
            prev=current;
            current=current->next;
        }
        
        Node *prevnode=prev,*currentnode=current,*nextnode=current;
        for(int i=m;i<=n;i++)
        {
            nextnode=currentnode->next;
            currentnode->next=prevnode;
            prevnode=currentnode;
            currentnode=nextnode;
        }
        
        prev->next=prevnode;
        current->next=currentnode;
        
        return dummy->next;
    }
};


// { Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}
  // } Driver Code Ends
