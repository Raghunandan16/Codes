#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    int temp1 = 0, temp2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n - 2; i++)
    {
        temp1 = max(temp1, vec[i + 1] + vec[n - 1] - 2 * vec[i]);
        temp2 = max(temp2, 2 * vec[n - i - 1] - vec[n - i - 2] - vec[0]);
    }
    cout << max(temp1, temp2) << "\n";
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