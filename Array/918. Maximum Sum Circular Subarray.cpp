class Solution {
public:
    int maxSubarraySumCircular(vector<int>& v) {
        int n=v.size(),i,sum=0,sum1=0,maxisum=0,count=0,s1=0,minisum=0,y=INT_MIN,x=0;
        for(i=0;i<n;i++)
        {
            if(v[i]<0)
            {
                count++;
            }
            sum1=sum1+v[i];
            sum=sum+v[i];
            maxisum=max(sum,maxisum);
            if(sum<0)
            {
                sum=0;
            }
            y=max(y,v[i]);
            v[i]=-v[i];
        }
        for(i=0;i<n;i++)
        {
            s1=s1+v[i];
            minisum=max(s1,minisum);
            if(s1<0)
            {
                s1=0;
            }
        }
        sort(v.begin(),v.end());
        x=sum1-(-minisum);
        if(count==n)
        {
            return y;
        }
        else{
            return max(x,maxisum);}
    }
};
