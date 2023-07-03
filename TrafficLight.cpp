#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    if (c == 'g')
    {
        cout << 0 << "\n";
        return;
    }
    s += s;
    vector<int> g, giv;
    for (int i = 0; i < 2 * n; i++)
    {
        if (s[i] == c && i < n)
        {
            giv.emplace_back(i);
        }
        else if (s[i] == 'g' && i < n)
        {
            g.emplace_back(i);
        }
        else if (s[i] == 'g' && i >= n)
        {
            g.emplace_back(i);
            break;
        }
    }
    int ans = 0;
    for (int i = 0; i < giv.size(); i++)
    {
        ans = max(ans, g[lower_bound(g.begin(), g.end(), giv[i]) - g.begin()] - giv[i]);
    }
    cout << ans << "\n";
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