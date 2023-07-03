#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<char> vec(n);
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (((int)vec[i] - 48) & 1)
        {
            odd++;
        }
    }
    if (odd <= 1)
    {
        cout << -1 << "\n";
        return;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 2)
        {
            cout << "\n";
            break;
        }
        else if (((int)vec[i] - 48) & 1)
        {
            cout << vec[i];
            count++;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}