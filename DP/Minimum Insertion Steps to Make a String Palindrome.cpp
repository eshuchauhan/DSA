#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int dp[1001][1001];

int LCS_recursive(string x,string y,int n,int m)
{
    if(n==0 || m==0) return 0;
    
    if(x[n-1]==y[m-1]) return 1+LCS_recursive(x,y,n-1,m-1);
    
    else return max(LCS_recursive(x,y,n-1,m),LCS_recursive(x,y,n,m-1));
}

int LCS_memo(string &x,string &y,int n,int m)
{
    if(n==0 || m==0) return 0;
    
    if(dp[n][m]!=-1) return dp[n][m];
    
    if(x[n-1]==y[m-1]) return dp[n][m]=1+LCS_memo(x,y,n-1,m-1);
    
    else return dp[n][m]=max(LCS_memo(x,y,n-1,m),LCS_memo(x,y,n,m-1));
}

int LCS_DP(string x,string y,int n,int m)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1]) dp[i][j]=1+dp[i-1][j-1];
            
            else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][m];
}

string print_LCS(string x,string y,int n,int m)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1]) dp[i][j]=1+dp[i-1][j-1];
            
            else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    
    string s="";
    int i=n,j=m;
    
    while(i>0 and j>0)
    {
        if(x[i-1]==y[j-1])
        {
            s=s+x[i-1];
            i--,j--;
        }
        else
        {
            if(dp[i][j-1]>dp[i-1][j]) j--;
            
            else i--;
        }
    }
    reverse(s.begin(),s.end());
    return s;
}
    

int longest_common_substring(string x,string y,int n,int m)
{
    int ans=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1]) dp[i][j]=1+dp[i-1][j-1];
            
            else dp[i][j]=0;
            
            ans=max(ans,dp[i][j]);
        }
    }
    return ans;
}

string print_LCS___for_shortest_common_substr(string x,string y,int n,int m)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1]) dp[i][j]=1+dp[i-1][j-1];
            
            else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    
    string s="";
    int i=n,j=m;
    
    while(i>0 and j>0)
    {
        if(x[i-1]==y[j-1])
        {
            s=s+x[i-1];
            i--,j--;
        }
        else
        {
            if(dp[i][j-1]>dp[i-1][j]) 
            {
                s=s+y[j-1];
                j--;
            }
            
            else 
            {
                s=s+x[i-1];
                i--;
            }
        }
    }
    
    while(i>0)
    {
        s=s+x[i-1];
        i--;
    }
    while(j>0)
    {
        s=s+y[j-1];
        j--;
    }
    reverse(s.begin(),s.end());
    return s;
}

string shortest_common_supersequence(string x,string y,int n,int m)
{
    string str=print_LCS___for_shortest_common_substr(x,y,n,m);
 
    // cout<<n+m-str.size()<<endl;  // length of shortest_common_supersequence

    return str;
    
}

int Minimum_Number_of_Insertion_and_Deletion_to_convert_String_a_to_String_b(string x,string y,int n,int m)
{
    int size=LCS_DP(x,y,n,m);
    return n+m-2*size;
}

int longest_Palindromic_Subsequence(string x,int n)
{
    string xx=x;
    reverse(x.begin(),x.end());
    string y=x;
    int m=y.size();
    return LCS_DP(xx,y,n,m);
}

int Minimum_Insertion_or_deletion_Steps_to_Make_a_String_Palindrome(string x,int n)
{
    string xx=x;
    reverse(x.begin(),x.end());
    string y=x;
    
    int lcs_size=LCS_DP(xx,y,n,y.size());
    
    return n-lcs_size;
}

bool Sequence_Pattern_Matching(string x,string y,int n,int m)
{
    if(LCS_DP(x,y,n,m)==x.size()) return true;
    return false;
}

int main()
{
    string x,y;
    cin>>x;
    memset(dp,-1,sizeof(dp));
    cout<<Minimum_Insertion_or_deletion_Steps_to_Make_a_String_Palindrome(x,x.size());
}
