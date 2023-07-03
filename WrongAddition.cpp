#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int count(ll x)
{
    return (int)(log10(x) + 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, s;
        cin >> a >> s;
        int counta = 0, counts = 0;
        vector<int> vec;
        bool flag = true;
        int x = count(a), y = count(s);
        if (a > s)
        {
            cout << "-1"
                 << "\n";
        }
        else
        {
            while (counts < y)
            {
                if (a % 10 <= s % 10)
                {
                    vec.emplace_back(s % 10 - a % 10);
                    a = a / 10;
                    s = s / 10;
                    counta++;
                    counts++;
                }
                else
                {
                    if (s % 100 - a % 10 > 10 || s % 100 - a % 10 < 0)
                    {
                        flag = false;
                        break;
                    }
                    vec.emplace_back(s % 100 - a % 10);
                    a = a / 10;
                    s = s / 100;
                    counta++;
                    counts += 2;
                }
            }
            if (counta < x)
            {
                flag = false;
            }
            if (flag == true)
            {
                int last = -1;
                for (int i = vec.size() - 1; i >= 0; i--)
                {
                    if (vec[i] != 0)
                    {
                        last = i;
                        break;
                    }
                }
                if (last == -1)
                {
                    for (auto it = vec.end() - 1; it != vec.begin() - 1; it--)
                    {
                        cout << *it;
                    }
                    cout << "\n";
                }
                else
                {
                    for (auto it = vec.begin() + last; it != vec.begin() - 1; it--)
                    {
                        cout << *it;
                    }
                    cout << "\n";
                }
            }
            if (flag == false)
            {
                cout << "-1"
                     << "\n";
            }
        }
    }
}