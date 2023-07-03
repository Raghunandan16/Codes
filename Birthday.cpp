#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m, k, l;
    cin >> n >> m >> k >> l;
    if ((k + l) % m == 0)
    {
        if ((k + l) / m <= n / m)
        {
            cout << (k + l) / m;
            return;
        }
    }
    else
    {
        if ((k + l) / m + 1 <= n / m)
        {
            cout << (k + l) / m + 1;
            return;
        }
    }
    cout << -1;
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}