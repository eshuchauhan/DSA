class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& a, int k) {
        priority_queue<pair<int,pair<int,int>>>p;
        vector<vector<int>>v;
        for(int i=0;i<a.size();i++)
        {
            p.push({a[i][0]*a[i][0]+a[i][1]*a[i][1],{a[i][0],a[i][1]}});
            if(p.size()>k)
            {
                p.pop();
            }
        }
        while(p.size()>0)
        {
            pair<int,int>t=p.top().second;
            v.push_back({t.first,t.second});
            p.pop();
        }
        return v;
    }
};
