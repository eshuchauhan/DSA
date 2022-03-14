#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll total_prime_factor=0;
void prime_fact(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            total_prime_factor++;
            int count=0;
    
            while(n%i==0)
            {
                count++;
                n=n/i;
            }
            cout<<i<<"^"<<count<<endl;
            
        }
        if(n>1)
        {
            total_prime_factor++;
            cout<<n<<"^"<<1<<endl;
        }
    }
}
int main()
{
    ll t,n,i;
    cin>>n;
    prime_fact(n);
    cout<<total_prime_factor<<endl;
}
