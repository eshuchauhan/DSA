#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>v;
bool prime[90000001];

void sieve()
{
    ll n=90000001;
    
    prime[0]=true;
    prime[1]=true;
    
    for(ll i=2;i*i<=n;i++)
    {
        if(prime[i]==false)
        {
            for(ll j=i*i;j<=n;j=j+i)
            {
                prime[j]=true;
            }
        }
    }
    
    for(ll i=2;i<=n;i++)
    {
        if(prime[i]==false)
        {
            v.push_back(i);
        }
    }
}

int main()
{
    sieve();
    ll t,i;
    cin>>t;
    // cout<<v.size()<<endl;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<v[n-1]<<" ";
        cout<<endl;
    }
}
