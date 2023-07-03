#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else if (s[i] != st.top())
        {
            st.push(s[i]);
        }
        else
            st.pop();
    }
    if (st.empty())
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}