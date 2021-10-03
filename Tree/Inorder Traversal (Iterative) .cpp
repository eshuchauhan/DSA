class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        stack<Node*>st;
        Node *x=root;
        while(true)
        {
            if(x!=NULL)
            {
                st.push(x);
                x=x->left;
            }
            else
            {
                if(st.size()==0)
                {
                    break;
                }
                else
                {
                    x=st.top();
                    ans.push_back(x->data);
                    st.pop();
                    x=x->right;
                }
            }
        }
        return ans;
    }
};
