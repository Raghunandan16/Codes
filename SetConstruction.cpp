#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> vec1[n + 1];
    vector<int> vec2[n + 1];
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1')
            {
                vec1[i].emplace_back(j + 1);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        vec2[i].emplace_back(i);
        for (auto it : vec1[i])
        {
            vec2[it].emplace_back(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << vec2[i].size() << " ";
        for (auto it : vec2[i])
        {
            cout << it << " ";
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
    {
        solve();
    }
}