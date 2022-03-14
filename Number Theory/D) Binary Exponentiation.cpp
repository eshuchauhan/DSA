#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll power(ll a, ll n)
{
    ll res=1;
    while(n>0)
    {
        if(n%2!=0)
        {
            res=res*a;
            n--;
        }
        else
        {
            a=a*a;
            n=n/2;
        }
    }
    return res;
}
int main()
{
    ll t,n,i,a;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
}
