#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    int tot = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        tot += vec[i];
    }
    int sum = 0, maxSum = vec[1];
    int start = 0, end = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0 && vec[i] > 0 && vec[i] > maxSum)
        {
            start = i;
        }
        sum += vec[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            end = i;
        }
    }
    bool flag = false;
    if (start == 0 && end == n - 1)
    {
        flag = true;
    }
    if ((tot > maxSum) || (tot == maxSum && flag == true))
    {
        cout << "YES \n";
    }
    else
        cout << "NO \n";
}
signed main()
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