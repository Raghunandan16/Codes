#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int count = 0;
    vector<int> fac;
    map<int, int> mpp;
    for (int i = 2; i * i < n; i++)
    {
        if (count == 2)
            break;
        if (n % i == 0)
        {
            fac.emplace_back(i);
            mpp[i]++;
            n = n / i;
            count++;
        }
    }
    if (fac.size() == 2)
    {
        if (mpp[n] == 0)
        {
            fac.emplace_back(n);
            cout << "YES\n";
            for (auto it : fac)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
        else
            cout << "NO\n";
    }
    else
        cout << "NO\n";
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