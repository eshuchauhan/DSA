Method 1:
Push O(n);Pop O(1)
void QueueStack :: push(int x)
{
        // Your Code
        q2.push(x);
        while(q1.size()!=0)
        {
            q2.push(q1.front());
            q1.pop();
        }
        while(q2.size()!=0)
        {
            q1.push(q2.front());
            q2.pop();
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
        int x=q1.front();
        q1.pop();
        return x;
}


Method 2:
Push O(1);Pop(n)
  
  void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
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
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int x=q1.front();
        q1.pop();
        while(q2.size()!=0)
        {
            q1.push(q2.front());
            q2.pop();
        }
        return x;
}





