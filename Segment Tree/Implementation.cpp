class NumArray {
public:
    
//...............................................................................................
    class Node{
        public:
        
        int start;
        int end;
        Node* left;
        Node* right;
        int val;
    };
    
    Node* root;
    
    Node* Construct(vector<int>& nums, int low, int high)
    {
        if(low==high)
        {
            Node* root=new Node();
            root->start=root->end=low;
            root->left=root->right=NULL;
            root->val=nums[low];
            return root;
        }
        
        Node* root=new Node();
        
        root->start=low;
        root->end=high;
        
        int mid=(low+high)/2;
        
        root->left=Construct(nums,low,mid);
        root->right=Construct(nums,mid+1,high);
        
        root->val=root->left->val+root->right->val;
        
        return root;
    }
    
    NumArray(vector<int>& nums) {
        root=Construct(nums,0,nums.size()-1);
    }
    
// ....................................................................................................

    
    void Update(Node* root, int index, int val)
    {
        if(root->start==root->end)
        {
            root->val=val;
            return;
        }
        
        int mid=(root->start+root->end)/2;
        
        if(index<=mid) Update(root->left,index,val);
        
        else Update(root->right,index,val);
        
        root->val=root->left->val+root->right->val;
    }
    
    void update(int index, int val) {
        Update(root,index,val);
    }
// ....................................................................................................

    
    int query(Node* root, int query_s, int query_e)
    {
        if(root==NULL || query_s>root->end || query_e<root->start) return 0;
        
        else if(root->start>=query_s and root->end<=query_e) return root->val;
        
        else
        {
            int left=query(root->left,query_s,query_e);
            int right=query(root->right,query_s,query_e);
            
            return left+right;
        }
    }
    
    int sumRange(int left, int right) {
        return query(root,left,right);
    }
// ....................................................................................................

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
