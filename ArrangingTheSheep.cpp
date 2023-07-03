#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    vector<int> pre(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (s[i] == '*')
            {
                count++;
            }
        }
        else
        {
            if (s[i] == '*')
            {
                count++;
                pre[i] = pre[i - 1];
            }
            else
            {
                pre[i] = pre[i - 1] + count;
            }
        }
    }
    vector<int> suf(n);
    count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            if (s[i] == '*')
            {
                count++;
            }
        }
        else
        {
            if (s[i] == '*')
            {
                count++;
                suf[i] = suf[i + 1];
            }
            else
            {
                suf[i] = suf[i + 1] + count;
            }
        }
    }
    int ans = min(pre[n - 1], suf[0]);
    for (int i = 1; i < n - 1; i++)
    {
        ans = min(ans, pre[i] + suf[i + 1]);
    }
    cout << ans << "\n";
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