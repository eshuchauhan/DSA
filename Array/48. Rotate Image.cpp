class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(a[i][j],a[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            int low=0,high=n-1;
            while(low<high)
            {
                swap(a[i][low],a[i][high]);
                low++;
                high--;
            }
        }
    }
};
