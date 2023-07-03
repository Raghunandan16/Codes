#include <bits/stdc++.h>
using namespace std;
#define
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cost = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        while (x <= n)
        {
            if (s[x - 1] == '1')
                break;
            if (s[x - 1] == '0')
            {
                s[x - 1] = 'x';
                cost += i;
            }
            x += i;
        }
    }
    cout << cost << "\n";
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