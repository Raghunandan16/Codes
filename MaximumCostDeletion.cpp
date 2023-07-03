#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<char> vec(n);
    int count = 0;
    int cost0 = 0,cost1=0, temp0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (vec[i] == '0')
        {
            temp0++;
        }
    }
    if (temp0 == n || temp0 == 0)
    {
        if (b > 0)
        {
            cout << (a + b) * n << "\n";
        }
        else
            cout << a * n + b << "\n";
        return;
    }
    if (b > 0)
    {
        cout << (a + b) * n << "\n";
        return;
    }
    //------------------------------------------------//
    //When i remove blocks of 0 first and 1 at the end
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == '0')
        {
            count++;
            if (i == n - 1 )
            {
                cost0 += a * count + b;
            }
        }
        else
        {
            if (count != 0)
            {
                cost0 += a * count + b;
                count = 0;
            }
        }
    }
    cost0 += (n - temp0) * a + b;
 //-------------------------------------------------//
 // When i remove blocks of 1 first and 0 at the end
    count=0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == '1')
        {
            count++;
            if (i == n - 1 )
            {
                cost1 += a * count + b;
            }
        }
        else
        {
            if (count != 0)
            {
                cost1 += a * count + b;
                count = 0;
            }
        }
    }
    cost1 += (temp0) * a + b;
    cout << max(cost0,cost1) << "\n";
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