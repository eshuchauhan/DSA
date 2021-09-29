class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        int n=a.size();
        int i=0,j=0;
        deque<int>d;
        vector<int>ans;
        while(j<n)
        {
            while(d.size()>0 && d.back()<a[j])
            {
                d.pop_back();
            }
            d.push_back(a[j]);
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                ans.push_back(d.front());
                
                if(a[i]==d.front())
                {
                    d.pop_front();
                }
                i++,j++;
            }
        }
        return ans;
    }
};
