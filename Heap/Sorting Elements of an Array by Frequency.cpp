#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    unordered_map<int,int>m;
	    vector<int>v;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    priority_queue<pair<int,int>>p;
	    for(auto i:m)
	    {
	        p.push({i.second,-i.first});
	    }
	    while(p.size()>0)
	    {
	        pair<int,int>t;
	        t=p.top();
	        
	        while(t.first--)
	        {
	            v.push_back(-t.second);
	        }
	        p.pop();
	    }
	    for(auto i:v)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
