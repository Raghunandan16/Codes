#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m, k;
    cin >> n >> m;
    int count1 = 0;
    int count2 = 0;
    int temp = n;
    while (temp != 0)
    {
        if (temp % 10 == 0)
        {
            count1++;
            count2++;
            temp /= 10;
        }
        else if (temp % 2 == 0)
        {
            count1++;
            temp /= 2;
        }
        else if (temp % 5 == 0)
        {
            count2++;
            temp /= 5;
        }
        else
            break;
    }
    k = 1;
    while (count1 != count2)
    {
        if (count1 < count2)
        {
            if (2 * k <= m)
            {
                k = 2 * k;
                count1++;
            }
            else
                break;
        }
        else
        {
            if (5 * k <= m)
            {
                k = 5 * k;
                count2++;
            }
            else
                break;
        }
    }
    while (10 * k <= m)
    {
        k = 10 * k;
    }
    int rem = m / k;
    k = k * rem;
    cout << n * k << "\n";
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