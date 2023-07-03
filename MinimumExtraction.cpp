#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> vec;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vec.emplace_back(a);
    }
    if (n == 1)
    {
        cout << vec[0] << "\n";
    }
    else
    {
        sort(vec.begin(), vec.end());
        int count=vec[0];
        int mx = vec[0];
        for (int i = 1; i < n; i++)
        {
            vec[i] -= count;
            mx = max(mx, vec[i]);
            count += vec[i];
        }

        cout << mx << "\n";
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