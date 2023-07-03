#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll mid, ll cb, ll cs, ll cc, ll nb, ll ns, ll nc, ll pb, ll ps, ll pc, ll r)
{
    ll cost = 0;
    if (cb * mid - nb > 0)
    {
        cost += (cb * mid - nb) * pb;
    }
    if (cs * mid - ns > 0)
    {
        cost += (cs * mid - ns) * ps;
    }
    if (cc * mid - nc > 0)
    {
        cost += (cc * mid - nc) * pc;
    }
    if (cost <= r)
    {
        return true;
    }
    return false;
}
void solve()
{
    string s;
    cin >> s;
    ll cb = 0, cs = 0, cc = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
            cb++;
        else if (s[i] == 'S')
            cs++;
        else
            cc++;
    }
    ll nb, ns, nc;
    cin >> nb >> ns >> nc;
    if (cb == 0)
        nb = 0;
    if (cs == 0)
        ns = 0;
    if (cc == 0)
        nc = 0;
    ll pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;
    ll start = 0, end = 1e14;
    ll mid , ans = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (check(mid, cb, cs, cc, nb, ns, nc, pb, ps, pc, r) == true)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    cout << ans;
}

int main()
{
    solve();
}