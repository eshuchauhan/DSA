class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),i,sum=0;
        
        vector<int>v(n);
        vector<int>v1(n),v2;
        
        v[0]=height[0];
        v1[n-1]=height[n-1];
        
        for(i=1;i<n;i++)
        {
            v[i]=max(v[i-1],height[i]);
        }
        for(i=n-2;i>=0;i--)
        {
            v1[i]=max(height[i],v1[i+1]);
        }
        for(i=0;i<n;i++)
        {
            int x=min(v[i],v1[i])-height[i];
            v2.push_back(x);
        }
        for(auto i:v2)
        {
            sum=sum+i;
        }
        return sum;
    }
};
