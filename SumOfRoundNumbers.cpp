#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            continue;
        }
        else
        {
            int x = (s[i] - 48);
            int y = i;
            while (n - y - 1 != 0)
            {
                x = 10 * x;
                y++;
            }
            vec.emplace_back(x);
        }
    }
    cout << vec.size() << "\n";
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