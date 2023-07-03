#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << "\n";
        int i = 1;
        int j = 3 * n;
        while (i < j)
        {
            cout << i << " " << j << "\n";
            i += 3;
            j -= 3;
        }
    }
    else
    {
        cout << n / 2 + 1 << "\n";
        int i = 1;
        int j = 3 * n;
        while (i < j)
        {
            cout << i << " " << j << "\n";
            i += 3;
            j -= 3;
        }
    }
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