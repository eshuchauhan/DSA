#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1000000007;

ll power(ll a, ll n, ll d)
{
    ll res=1;
    while(n)
    {
        if(n%2!=0)
        {
            res=((res%d)*(a%d))%d;
            n--;
        }
        else
        {
            a=((a%d)*(a%d))%d;
            n=n/2;
        }
    }
    return res;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,i,j;
        
        cin>>a>>b>>n;
        
        if(a==b)
        {
            cout<<(power(a,n,mod)+power(b,n,mod))%mod<<endl;
        }
        else
        {
        
        ll ans=1;
        
        ll x=abs(a-b);
        
        for(i=1;i*i<=x;i++)
        {
            if(x%i==0)
            {
                ll temp=(power(a,n,i)+power(b,n,i))%i;
                
                if(temp==0) ans=max(ans,i);
                
                temp=(power(a,n,x/i)+power(b,n,x/i))%(x/i);
                
                if(temp==0) ans=max(ans,x/i);
                
            }
        }
        // cout<<endl;
        ans=ans%mod;
        cout<<ans<<endl;
        }
    }
}
