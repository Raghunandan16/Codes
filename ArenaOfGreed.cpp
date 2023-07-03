#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    int count = 0;
    int c = 0;
    while (n != 0)
    {
        if (count % 2 == 0)
        {
            if (n % 2 != 0)
            {
                c++;
                n--;
            }
            else
            {
                if ((n / 2) % 2 == 0 && n / 2 != 2)
                {
                    c++;
                    n--;
                }
                else
                {
                    c += n / 2;
                    n = n / 2;
                }
            }
        }
        else
        {
            if (n % 2 != 0)
            {
                n--;
            }
            else
            {
                if ((n / 2) % 2 == 0 && n / 2 != 2)
                {
                    n--;
                }
                else
                {
                    n = n / 2;
                }
            }
        }
        count++;
    }
    cout << c << "\n";
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