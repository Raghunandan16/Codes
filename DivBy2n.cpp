#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    int count = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        while (x % 2 == 0 && x != 0)
        {
            count++;
            x = x / 2;
        }
        int y = i + 1;
        int c = 0;
        while (y % 2 == 0 && y != 0)
        {
            c++;
            y = y / 2;
        }
        v1[i] = c;
    }
    sort(v1.begin(), v1.end());
    if (count >= n)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        count += v1[i];
        if (count >= n)
        {
            cout << n - i << endl;
            return;
        }
    }
    cout << -1 << endl;
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