class Solution {
public:
    int evalRPN(vector<string>& a) {
        int i,n=a.size();
        stack<int>s;
        int ans;
        for(i=0;i<n;i++)
        {
            if(a[i]=="+" || a[i]=="-" || a[i]=="*" || a[i]=="/")
            {
                int y=s.top();s.pop();
                int x=s.top();s.pop();
                
                if(a[i]=="+") ans=x+y;
                if(a[i]=="-") ans=(x-y);
                if(a[i]=="*") ans=(x*y);
                if(a[i]=="/") ans=(x/y);
                    
                s.push(ans);
            }
            else
            {
                s.push(stoi(a[i]));
            }
        }
        return s.top();
    }
};
