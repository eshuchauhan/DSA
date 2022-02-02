#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
#define trav(v){for(auto itr:v){cout<<itr<<" ";}}
#define pb(a) push_back(a)
#define endl "\n"

const ll mod=(ll)1e9+7;
const ll maxn=(ll)1e6+7;
void printarray(ll a[],ll n){for(ll i=0;i<n;i++)cout<<a[i]<<" ";}
bool isPrime(ll n){if(n==1){return false;}else if(n==2){return true;}if(n%2==0){return false;}for(auto i=3;i<=sqrt(n);i=i+2){if(n%i==0){return false;}}return true;}
bool isPowerOfTwo(ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));} 
void Sieve(ll n,vector<ll>&v){bool prime[n+1];memset(prime,true,sizeof(prime));for(ll p=2;p*p<=n;p++){if(prime[p]==true){for(int i=p*p;i<=n;i+=p) prime[i]=false;}}for(int p=2;p<=n;p++) if (prime[p]) v.push_back(p);}

ll gcd(ll a,ll b){if(b==0)return a;else return __gcd(b,a%b);}
ll lcm(ll a,ll b){return (a*b)/__gcd(a,b);}

//
ll visited[1000001]={0};
vector<ll>adj[10000001];
void dfs(ll node)
{
    visited[node]=1;
    for(ll child:adj[node])
    {
        if(visited[child]==0)
        dfs(child);
    }
}
void run()
{
    ll i,j,a,b,k,n,m,x=0,y=0,z=0;
    cin>>n>>m;
    
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    ll cc=0;
    
    for(ll i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
            cc++;
        }
    }
    
    if(cc==1 and m==n-1) cout<<"YES";
    else cout<<"NO";
}
//

int main()
{
//  #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//  #endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll t;for(cin>>t;t--;cout<<endl)
    run();
    
    return 0;
}
