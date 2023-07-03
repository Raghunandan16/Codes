#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> vec(n);
    int sum = 0, tsum = 0;
    int rem = min(n, d);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    for (int i = n - 1; i >= 0; i--)
    {
        if (rem != 0)
        {
            sum += vec[i];
            rem--;
        }
        tsum += vec[i];
    }

    if (d * vec[n - 1] < c)
    {
        cout << "Impossible\n";
    }
    else if (sum >= c)
    {
        cout << "Infinity\n";
    }
    else
    {
        int s = 0;
        int e = 1e6;
        int k = 0;
        while (s <= e)
        {
            k = s + (e - s) / 2;
            int div = d / (k + 1);
            int remm = d % (k + 1);
            int ans = 0;
            if (k + 1 < n)
            {
                int temp = k + 1;
                int i = n - 1;
                int isum = 0;
                while (temp != 0)
                {
                    isum += vec[i];
                    i--;
                    temp--;
                }
                ans = isum * div;
                int temp1 = remm;
                int j = n - 1;
                while (temp1 != 0 && j >= 0)
                {
                    ans += vec[j];
                    j--;
                    temp1--;
                }
            }
            else
            {
                ans = div * tsum;
                int temp2 = remm;
                int z = n - 1;
                while (temp2 != 0 && z >= 0)
                {
                    ans += vec[z];
                    z--;
                    temp2--;
                }
            }
            if (ans >= c)
            {
                s = k + 1;
            }
            else
            {
                e = k - 1;
            }
        }
        cout << s - 1 << "\n";
    }
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