class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
    vector<int>v1,v2;
    stack<pair<int,int>>s,s1;  // value,index
    
    // NSL
    int n=a.size(),i;
    int pseudoindex1=-1,pseudoindex2=n,ans=0;
    
    for(i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            v1.push_back(pseudoindex1);
        }
        else if(s.size()>0 && s.top().first<a[i])
        {
            v1.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=a[i])
        {
            while(s.size()>0 && s.top().first>=a[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v1.push_back(-1);
            }
            else
            {
                v1.push_back(s.top().second);
            }
        }
        s.push({a[i],i});
    }
    
    // NSR

    for(i=n-1;i>=0;i--)
    {
        if(s1.size()==0)
        {
            v2.push_back(pseudoindex2);
        }
        else if(s1.size()>0 && s1.top().first<a[i])
        {
            v2.push_back(s1.top().second);
        }
        else if(s1.size()>0 && s1.top().first>=a[i])
        {
            while(s1.size()>0 && s1.top().first>=a[i])
            {
                s1.pop();
            }
            if(s1.size()==0)
            {
                v2.push_back(pseudoindex2);
            }
            else
            {
                v2.push_back(s1.top().second);
            }
        }
        s1.push({a[i],i});
    }
    reverse(v2.begin(),v2.end());
    
    vector<int>w;
    
    for(i=0;i<n;i++)
    {
        w.push_back((v2[i]-v1[i])-1);
    }
    
    for(i=0;i<n;i++)
    {
        ans=max(ans,w[i]*a[i]);
    }
    
    return ans;
    }
};
