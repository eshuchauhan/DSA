void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
        for(int i=0;i<q1.size()-1;i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code
        if(q1.size()==0)
        {
            return -1;
        }
        // int i=1;
        int x=q1.front();
        
        q1.pop();
        
        return x;
}
