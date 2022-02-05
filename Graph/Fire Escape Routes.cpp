#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = (ll)1e9 + 7;
vector<ll> adj[100001];
int visited[100001];
ll cc_size;
void dfs(ll node)
{
    visited[node] = 1;
    cc_size++;
    for (int child : adj[node])
    {
        if (visited[child] == 0)
        {
            dfs(child);
        }
    }
}
int main()
{
    ll t, n, m, i, a, b;
    cin >> t;
    while (t--)
    {
        ll leaders = 1;
        cin >> n >> m;
        for (i = 1; i <= n; i++)
        {
            adj[i].clear();
            visited[i] = 0;
        }
        for (i = 1; i <= m; i++)
        {
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        ll cc = 0;
        for (i = 1; i <= n; i++)
        {
            if (visited[i] == 0)
            {
                cc_size = 0;
                dfs(i);
                cc++;
                leaders = (leaders * cc_size) % mod;
            }
        }
        cout << cc << " " << leaders << endl;
    }
}
