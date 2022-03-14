#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(ll n)
{
    if(n==1) return false;
    for(ll i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}

ll prime[1000001];

void sieve()
{
    ll n=1000000;
    for(ll i=1;i<=n;i++) prime[i]=1;
    
    prime[0]=0;
    prime[1]=0;
    
    for(ll i=2;i*i<=n;i++)
    {
        if(prime[i]==1)
        {
            for(ll j=i*i;j<=n;j=j+i)
            {
                prime[j]=0;
            }
        }
    }
}

int main()
{
    ll n,i;
    sieve();
    
    for(i=0;i<=11;i++) cout<<prime[i]<<" ";
    
}
