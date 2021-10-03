long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long j=m-1,i;
    long long ans=INT_MAX;
    for(i=0;j<n;i++)
    {
        ans=min(a[j]-a[i],ans);
        j++;
    }
    return ans;
    }   
