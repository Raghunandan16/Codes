#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> diff(n);
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> diff[i];
    }
    vec[0] = diff[0];
    for (int i = 1; i < n; i++)
    {
        int a = vec[i - 1] + diff[i];
        int b = vec[i - 1] - diff[i];
        if (diff[i] == 0)
        {
            vec[i] = a;
            continue;
        }
        else if (a >= 0 && b >= 0)
        {
            cout << -1 << "\n";
            return;
        }
        else
            vec[i] = a;
    }
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << "\n";
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