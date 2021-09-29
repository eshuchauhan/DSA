class Solution {
public:
    bool findRotation(vector<vector<int>>& a, vector<vector<int>>& target) {
        if(a==target)
        {
            return true;
        }
        for(int i=0;i<3;i++)
        {
                for(int i=0;i<a.size();i++)
                {
                    for(int j=i+1;j<a.size();j++)
                    {
                        swap(a[i][j],a[j][i]);
                    }
                }
            for(int i=0;i<a.size();i++)
            {
            int low=0,high=a.size()-1;
            while(low<high)
            {
                swap(a[i][low],a[i][high]);
                low++;
                high--;
            }
            }
           if(a==target)
           {
               return true;
           }
        }
        return false;
    }
};
