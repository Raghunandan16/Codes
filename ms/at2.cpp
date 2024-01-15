#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
int val[100005];
int dp[100005];

void dfs(int u, int p)
{
    dp[u] = val[u];
    for (int v : adj[u])
    {
        if (v == p)
            continue;
        dfs(v, u);
        dp[u] += max(0, dp[v]);
    }
}

long int getMaximumEfficiency(int connect_nodes, vector<int> connect_from, vector<int> connect_to, vector<int> computer_val, int k)
{
    for (int i = 1; i <= connect_nodes; i++)
    {
        adj[i].clear();
        val[i] = computer_val[i - 1];
    }
    for (int i = 0; i < connect_nodes - 1; i++)
    {
        adj[connect_from[i]].push_back(connect_to[i]);
        adj[connect_to[i]].push_back(connect_from[i]);
    }
    dfs(1, 0);
    return dp[1] - k;
}

int main()
{
    int connect_nodes = 4;
    vector<int> connect_from = {1, 2, 3};
    vector<int> connect_to = {2, 3, 4};
    vector<int> computer_val = {3, -7, -8, -9};
    int k = 5;
    cout << getMaximumEfficiency(connect_nodes, connect_from, connect_to, computer_val, k);
}