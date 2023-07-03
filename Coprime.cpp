#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(1001, -1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        vec[x] = i;
    }
    int ans = -1;
    for (int i = 1; i <= 1000; i++)
    {
        if (vec[i] == -1)
            continue;
        for (int j = i; j <= 1000; j++)
        {
            if (vec[j] == -1)
                continue;
            else
            {
                int gcd = __gcd(i, j);
                if (gcd == 1)
                    ans = max(ans, vec[i] + vec[j]);
            }
        }
    }
    cout << ans << "\n";
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