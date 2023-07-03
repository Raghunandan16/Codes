#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    bool flag = false;
    for (auto ch : s)
    {
        if (flag == false && ch == 57)
        {
            cout << ch;
            flag = true;
        }
        else
        {
            flag = true;
            if (ch >= 53)
            {
                ch = 48 + (57 - ch);
                cout << ch;
            }
            else
                cout << ch;
        }
    }
}
int main()
{
    solve();
}