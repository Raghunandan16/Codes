#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    cin >> x;
    int n, m;
    m = x % 11;
    n = (x - 111 * m) % 11;
    if ((x - 111 * m) >= 0 && n == 0)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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