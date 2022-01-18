priority_queue<int>maxh;
    priority_queue<int,vector<int>,greater<int>>minh;
    
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(maxh.size()==0 || maxh.top()>x)
        {
            maxh.push(x);
        }
        else
        {
            minh.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(maxh.size()-minh.size()==2)
        {
            minh.push(maxh.top());
            maxh.pop();
        }
        else if(minh.size()-maxh.size()==2)
        {
            maxh.push(minh.top());
            minh.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(maxh.size()==minh.size()) return (minh.top()+maxh.top())/2.0;
        else if(maxh.size()>minh.size()) return maxh.top();
        else return minh.top();
    }
