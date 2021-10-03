class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        //code here
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        
        stack<Node*>st;
        st.push(root);
        while(st.size()!=0)
        {
            Node *x=st.top();
            ans.push_back(x->data);
            st.pop();
            if(x->right!=NULL)
            {
                st.push(x->right);
            }
            if(x->left!=NULL)
            {
                st.push(x->left);
            }
        }
        return ans;
    }
};
