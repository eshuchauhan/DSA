class Solution {
public:

void lefttree(Node *root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left!=NULL)
        {
            ans.push_back(root->data);
            lefttree(root->left,ans);
        }
        else if(root->right!=NULL)
        {
            ans.push_back(root->data);
            lefttree(root->right,ans);
        }
    }
    
   void leaf(Node* root, vector<int> &vt)
    {
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            vt.push_back(root->data);
        }
        leaf(root->left, vt);
        leaf(root->right, vt);
    }
    
    void righttree(Node *root, vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->right!=NULL)
        {
            righttree(root->right,ans);
            ans.push_back(root->data);
        }
        else if(root->left!=NULL)
        {
            righttree(root->left,ans);
            ans.push_back(root->data);
        }
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>v;
        if(root==NULL) 
        {
            return{};
        }
        v.push_back(root->data);
        
        lefttree(root->left,v);
        leaf(root,v);
        righttree(root->right,v);
        
        return v;
    }
};
