//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    // Your Code
    StackNode *Newnode=new StackNode(x);
    Newnode->next=top;
    top=Newnode;
    
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(top==NULL)
    {
        return -1;
    }
    
    StackNode *temp=top;
    top=top->next;
    int x=temp->data;
    free(temp);
    return x;
}
