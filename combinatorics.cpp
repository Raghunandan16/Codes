#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define int long long
int ncr(int n, int r)
{
    vector<int> c(n + 1);
    c[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)
        {
            c[j] = (c[j] + c[j - 1]) % M;
        }
    }
    return c[r];
}
int powe(int base, int n)
{
    int ans = 1;
    while (n)
    {
        if (n & 1)
        {
            ans = (ans * base) % M;
            n = n - 1;
        }
        else
        {
            n = n / 2;
            base = (base * base) % M;
        }
    }
    return ans;
}
signed main()
{
    int n, m;
    cin >> n >> m;
    int ans1 = powe(2, m) - 1;
    int ans = powe(ans1, n);
    cout << ans;
}