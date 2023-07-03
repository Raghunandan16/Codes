#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    int s1 = 0, s2 = 0;
    int x, y, mx = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s1 += x;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        mx = max(mx, y);
        s2 += y;
    }
    cout << s1 + s2 - mx << "\n";
}
signed main()
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