#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    map<int, int> mpp;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        mpp[vec[i]]++;
        sum += vec[i];
    }
    if ((2 * sum) % n != 0)
    {
        cout << 0 << "\n";
        return;
    }
    int sum1 = (2 * sum) / n;
    int ans = 0;
    for (auto it : mpp)
    {
        if (it.first > sum1)
            break;
        int rem = sum1 - it.first;
        if (rem < it.first)
            break;
        else if (rem == it.first)
            ans += (it.second) * (it.second - 1) / 2;
        else
            ans += it.second * mpp[rem];
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