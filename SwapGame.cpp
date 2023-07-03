#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int mini = x;
    for (int i = 1; i < n; i++)
    {
        int y;
        cin >> y;
        mini = min(mini, y);
    }
    if (x == mini)
    {
        cout << "BOB\n";
        return;
    }
    else
        cout << "ALICE\n";
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