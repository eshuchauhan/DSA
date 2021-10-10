class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
        // code here
        map<int,int>m;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int x=k-a[i];
            if(m.find(x)!=m.end())
            {
                count=count+m[x];
            }
            m[a[i]]++;
        }
        return count;
    }
};
