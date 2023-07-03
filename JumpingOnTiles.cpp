#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
     int n = s.length();
    map<char,int>mpp;
    for (int i = 0; i < n; i++)
    {
        
    }
    char start = s[0];
    char end = s[n - 1];
    sort(s.begin(), s.end());
    auto x = s.find(start);
    auto y = s.find(end);
    vector<int> p(n);
    if (start > end)
    {
        p[y] = 0;
        for (int i = y + 1; i < n; i++)
        {
            p[i] = ((int)s[i] - 96) - ((int)s[i - 1] - 96) + p[i - 1];
        }
        cout << p[x]<<" "<<x-y+1;
        for (int i = y; i <= x; i++)
        {

        }
        
    }
    else
    {   p[x]=0;
        for (int i = x+1; i < n; i++)
        {
            p[i] = ((int)s[i] - 96) - ((int)s[i - 1] - 96) + p[i - 1];
        }
        cout<<p[y]<<" "<<y-x+1;
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