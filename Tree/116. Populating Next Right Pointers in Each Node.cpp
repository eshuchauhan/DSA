/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
        {
            return 0;
        }
        
        queue<Node*>q;
        q.push(root);
        q.push(0);
        while(q.size()!=0)
        {
            Node* x=q.front();
            q.pop();
            if(x!=NULL)
            {
                if(x->left!=NULL) q.push(x->left);
                if(x->right!=NULL) q.push(x->right);
                x->next=q.front();
            }
            else if(x==NULL)
            {
                if(q.size()!=0)
                {
                    q.push(NULL);
                }
            }
        }
        return root;
    }
};
