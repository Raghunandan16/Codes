#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, int> mpp;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x %= 10;
        mpp[x]++;
        if (mpp[x] > 3)
        {
            continue;
        }
        vec.emplace_back(x);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            for (int k = j + 1; k < vec.size(); k++)
            {
                int sum = (vec[i] + vec[j] + vec[k]) % 10;
                if (sum == 3)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
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