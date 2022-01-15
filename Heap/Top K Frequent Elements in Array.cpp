vector<int> topK(vector<int>& a, int k) {
        // Code here
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]++;
        }
        
        priority_queue<pair<int,int>>p;
        
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            p.push({i->second,i->first});
        }
        while(k--)
        {
            v.push_back(p.top().second);
            p.pop();
        }
        return v;
    }
