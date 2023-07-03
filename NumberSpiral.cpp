#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll ans;
    if (x > y)
    {
        if (x % 2 == 0)
        {
            ans = x * x - (y - 1);
        }
        else
        {
            ans = x * x - (x - 1) - (x - y);
        }
    }
    else
    {
        if (y % 2 != 0)
        {
            ans = y * y - (x - 1);
        }
        else
        {
            ans = y * y - (y - 1) - (y - x);
        }
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