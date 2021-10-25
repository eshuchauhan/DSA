class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& a) {
        int i,m=a.size(),n=a[0].size();
        int row=0,col=0;
        bool up=true;
        vector<int>v;
        while(row<m && col<n)
        {
            if(up==true)
            {
                while(row>0 && col<n-1)
                {
                    v.push_back(a[row][col]);
                    row--;
                    col++;
                }
                v.push_back(a[row][col]);
                if(col==n-1)
                {
                    row++;
                }
                else
                {
                    col++;
                }
            }
            else if(up==false)
            {
                while(col>0 && row<m-1)
                {
                    v.push_back(a[row][col]);
                    row++;
                    col--;
                }
                v.push_back(a[row][col]);
                if(row==m-1)
                {
                    col++;
                }
                else
                {
                    row++;
                }
            }
            up=!up;
        }
        return v;
    }
};
