#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    //TC O(nlogn)
    ll n;
    cin >> n;
    vector<ll> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    string s;
    cin >> s;
    vector<vector<ll>> vec(n); //{rating,likestatus,index}
    ll dislikes = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            dislikes++;
            vec[i] = {p[i], 0, i};
        }
        else
        {
            vec[i] = {p[i], 1, i};
        }
    }
    sort(vec.begin(), vec.end());
    vector<ll> q(n);
    ll l = dislikes + 1, dl = 1;
    for (int i = 0; i < n; i++)
    {
        ll index = vec[i][2], status = vec[i][1];
        if (status == 0)
        {
            q[index] = dl++;
        }
        else
            q[index] = l++;
    }
    for (auto it : q)
        cout << it << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}