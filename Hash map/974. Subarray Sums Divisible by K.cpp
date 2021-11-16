class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        int i,j,n=a.size(),sum=0;
        map<int,int>m;
        m[0]=1;
        int count=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            int rem=sum%k;
            if(rem<0)
            {
                rem=rem+k;
            }
            if(m.find(rem)!=m.end())
            {
                count=count+m[rem];
            }
            m[rem]++;
        }
        return count;
    }
};
