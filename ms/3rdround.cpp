#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 0->1 5
    // 1->2 4
    // 2->4 1
    // 3->4 2
    vector<pair<int, int>> adj[5];
    adj[0].push_back({1, 5});
    adj[1].push_back({2, 4});
    adj[2].push_back({4, 1});
    adj[3].push_back({4, 2});
    int src = 0;
    int destination = 3;
    vector<int> dist(5, 1e9);
    vector<int> parent(5, -1);
    dist[0] = 0;
    priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, greater<pair<pair<int, int>, int>>> pq; // 1st -> wt, 2nd->node
    pq.push({{0, src}, 0});
    parent[0] = 0;
    while (!pq.empty())
    {
        int node = pq.top().first.second;
        int wt = pq.top().first.first;
        pq.pop();
        if (node == destination)
            break;
        for (auto it : adj[node])
        {
            int val = it.second;
            int nod = it.first;       // current reachable node
            if (val + wt < dist[nod]) // relaxtion
            {
                dist[nod] = val + wt;
                pq.push({{dist[nod], nod}, node}); // pushing updated dist,node
                parent[nod] = node;
            }
        }
    }
    int i = destination;
    /*  for (auto it : parent)
     {
         cout << it << " ";
     } */
    vector<int> ans;
    if (parent[i] == -1)
    {
        cout << "Not reachable";
        return 0;
    }
    ans.push_back(i);

    while (i != 0)
    {
        i = parent[i];
        if (i == -1)
        {
            cout << "Not reachable";
            return 0;
        }
        ans.push_back(i);
    }
    reverse(ans.begin(), ans.end());
    for (auto it : ans)
        cout << it << " ";
}