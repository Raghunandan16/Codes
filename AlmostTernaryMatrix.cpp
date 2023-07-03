#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> vec[n];
    n = n / 2;
    m = m / 2;
    for (int i = 0; i < n; i++)
    {
        int a = i & 1;
        for (int j = 0; j < m; j++)
        {
            if (a == 0)
            {
                vec[2 * i].emplace_back(0);
                vec[2 * i].emplace_back(1);
                vec[2 * i + 1].emplace_back(1);
                vec[2 * i + 1].emplace_back(0);
                a = 1;
            }
            else
            {
                vec[2 * i].emplace_back(1);
                vec[2 * i].emplace_back(0);
                vec[2 * i + 1].emplace_back(0);
                vec[2 * i + 1].emplace_back(1);
                a = 0;
            }
        }
    }
    for (auto it : vec)
    {
        for (auto x : it)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}