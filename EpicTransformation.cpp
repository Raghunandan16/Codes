#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, int> mpp;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mpp[x]++;
    }
    for (auto it : mpp)
    {
        pq.emplace(it.second);
    }
    while (pq.size() >= 2)
    {
        int x, y;
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        x -= 1;
        y -= 1;
        if (x >= 1)
            pq.push(x);
        if (y >= 1)
            pq.push(y);
    }
    if (pq.size() == 0)
    {
        cout << 0 << "\n";
        return;
    }
    cout << pq.top() << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}