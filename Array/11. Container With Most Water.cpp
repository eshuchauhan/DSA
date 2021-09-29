class Solution {
public:
    int maxArea(vector<int>&a) {
        long long int n=a.size(),x=0,y,i,j;
        for(i=0,j=n-1;i<=j;)
        {
            x=max(min(a[i],a[j])*(j-i),x);
            if(a[j]>a[i])
            {
                i++;
            }
            else if(a[i]>a[j])
            {
                j--;
            }
            else
            {
                i++,j--;   
            }
        }
        return x;
    }
};
