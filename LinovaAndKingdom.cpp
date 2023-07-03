#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> adj[200005];
vector<int> lev(200005);
vector<int> subtree(200005);
void dfs(int node, int par, int level)
{
    lev[node] = level;
    int sum = 0;
    for (auto it : adj[node])
    {
        if (it != par)
        {
            dfs(it, node, level + 1);
            sum += subtree[it];
        }
    }
    subtree[node] = 1 + sum;
}
void LinovaAndKingdom()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0, 1);
    vector<int> contributions;
    for (int i = 1; i <= n; i++)
    {
        contributions.push_back(lev[i] - subtree[i]);
    }
    sort(contributions.begin(), contributions.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += contributions[i];
    }
    cout << ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LinovaAndKingdom();
}