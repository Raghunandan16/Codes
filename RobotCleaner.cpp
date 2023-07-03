#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    int a, b;
    if (rb > rd)
    {
        a = (n - rb) + (n - rd);
    }
    if (rb <= rd)
    {
        a = rd - rb;
    }
    if (cb > cd)
    {
        b = (m - cb) + (m - cd);
    }
    if (cb <= cd)
    {
        b = cd-cb;
    }
    cout << min(a, b) << "\n";
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