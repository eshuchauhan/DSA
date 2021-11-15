class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        //code here.
        int i=0,j=0;
        map<int,int>mapp;
        vector<int>v;
        while(j<n)
        {
            if(j-i+1<k)
            {
                mapp[a[j]]++;
                j++;
            }
            else
            {
                mapp[a[j]]++;
                int x=mapp.size();
                v.push_back(x);
                mapp[a[i]]--;
                if(mapp[a[i]]==0)
                {
                    mapp.erase(a[i]);
                }
                i++,j++;
            }
        }
        return v;
    }
};
