int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        int i=0,j=1;
        int ans=1;
        while(j<n)
        {
            if(v[j].second>v[i].first)
            {
                ans++;
                i=j;
            }
            j++;
        }
        return ans;
    }
