#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    map<int, int> mpp;
    int mini = INT32_MAX;
    int maxi = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        mini = min(vec[i], mini);
        maxi = max(vec[i], maxi);
        mpp[vec[i]]++;
    }
    if (mini == maxi)
    {
        cout << mpp[mini] * (mpp[maxi] - 1) << "\n";
        return;
    }
    cout << 2 * mpp[mini] * mpp[maxi] << "\n";
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