int longestSubstrDistinctChars (string s)
{
    // your code here
    int i=0,j=0,n=s.size(),maxi=0;
    set<char>st;
    while(j<n)
    {
        if(st.find(s[j])==st.end())
        {
            st.insert(s[j]);
            maxi=max(j-i+1,maxi);
            j++;
        }
        else
        {
            st.erase(s[i]);
            i++;
        }
    }
    return maxi;
}
