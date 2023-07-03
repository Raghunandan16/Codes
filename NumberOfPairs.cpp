#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int t = n * (n - 1) / 2;
    int pl = 0, pr = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int sum = l - vec[i];
        if (sum > 0)
        {
            int ind = lower_bound(vec.begin() + i + 1, vec.end(), sum) - vec.begin();
            pl += (ind - 1 - i);
        }
        else
            break;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int sum = r - vec[i];
        if (sum > 0)
        {
            int ind = upper_bound(vec.begin() + i + 1, vec.end(), sum) - vec.begin();
            if (ind == n)
            {
                continue;
            }
            pr += (n - ind);
        }
        else
        {
            pr += ((n - i) * (n - i - 1) / 2);
            break;
        }
    }
    cout << t - pl - pr << endl;
    ;
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