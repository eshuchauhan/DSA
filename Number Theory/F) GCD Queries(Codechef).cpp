#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        ll n,q,l,r;
        
        cin>>n>>q;
        
        ll pre[n+1],suff[n+1];
        
        ll a[n];
        
        for(i=1;i<=n;i++) cin>>a[i];
        
        pre[0]=suff[n+1]=0;
        
        for(i=1;i<=n;i++) pre[i]=gcd(pre[i-1],a[i]);
        
        for(i=n;i>=1;i--) suff[i]=gcd(a[i],suff[i+1]);
        
        while(q--)
        {
            cin>>l>>r;
            cout<<gcd(pre[l-1],suff[r+1])<<endl;
        }
    }
}
