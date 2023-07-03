#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll l, r, a;
    cin >> l >> r >> a;
    ll ans;
    if (l == r)
    {
        ans = r / a + (r % a);
    }
    if (r - l >= a)
    {
        ans = max((r / a - 1) + (a - 1), (r / a) + (r % a));
    }
    if (r - l < a)
    {
        if (r / a - l / a == 1)
        {
            ans = max(l / a + (a - 1), (r / a) + (r % a));
        }
        else
        {
            ans = r / a + (r % a);
        }
    }
    cout << ans << "\n";
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}