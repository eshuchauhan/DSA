#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

Node *buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    
    Node *root=new Node(d);
    cout<<"enter left child "<<endl;
    root->left=buildTree();
    cout<<"enter right child "<<endl;
    root->right=buildTree();
    
    return root;
}

void Print(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    Print(root->left);
    Print(root->right);
}

int main()
{
    Node *root=buildTree();
    cout<<"Preorder : ";
    Print(root);
}
