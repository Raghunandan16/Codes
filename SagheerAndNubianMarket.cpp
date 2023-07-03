#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, S;
    cin >> n >> S;
    vector<int> vec(n + 1);
    vector<int> v1(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i];
    }
    int k = 0, cost, pcost = 0;
    int s = 0;
    int e = n;
    while (s <= e)
    {
        cost = 0;
        k = s + (e - s) / 2;
        for (int i = 1; i <= n; i++)
        {
            v1[i] = vec[i] + i * k;
        }
        sort(v1.begin(), v1.end());
        int count = 0;
        while (count < k)
        {
            count++;
            cost += v1[count];
        }
        if (cost > S)
        {
            e = k - 1;
        }
        else if (cost < S)
        {
            s = k + 1;
            pcost = cost;
        }
        else
        {
            cout << k << " " << cost;
            return;
        }
    }
    cout << s - 1 << " " << pcost;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}