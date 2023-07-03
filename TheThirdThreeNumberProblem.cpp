#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n & 1)
        cout << -1 << "\n";
    else
        cout << 1 << " " << 1 << " " << (1 ^ (n / 2)) << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}