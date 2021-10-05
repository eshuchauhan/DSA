class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>ans;
    	if(root==NULL)
    	{
    	    return ans;
    	}
    	queue<Node*>q;
    	q.push(root);
    	
    	int leftright=1;
    	
    	while(q.size()!=0)
    	{
    	    vector<int>t;
    	    int n=q.size();
    	    
    	    for(int i=0;i<n;i++)
    	    {
    	        Node *x=q.front();
    	        q.pop();
    	    
    	        t.push_back(x->data);
    	   
    	        if(x->left!=NULL)
    	        {
    	            q.push(x->left);
    	        }
    	    
    	        if(x->right!=NULL)
    	        {
    	            q.push(x->right);
    	        }
    	    }
    	    
    	    if(leftright==1)
    	    {
    	        ans.insert(ans.end(),t.begin(),t.end());
    	    }
    	    else
    	    {
    	        reverse(t.begin(),t.end());
    	        ans.insert(ans.end(),t.begin(),t.end());
    	    }
    	    leftright=1-leftright;
    	}
    	return ans;
    }
};
