class Solution {
public:
    vector<vector<int>> generate(int r) {
        int a[r+1][r+2],i,j;
        memset(a,0,sizeof(a));
        vector<vector<int>>ans;
        for(i=0;i<r;i++)
        {
            vector<int>v;
            for(j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                    a[i][j]=1;
                }
                else
                {
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
                }
                v.push_back(a[i][j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
