#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    if (st.size() > k)
    {
        cout << -1 << "\n";
        return;
    }
    cout << n * k << "\n";
    for (int i = 0; i < n; i++)
    {
        for (auto it : st)
        {
            cout << it << " ";
        }
        int s = st.size();
        while (s < k)
        {
            cout << 1 << " ";
            s++;
        }
    }
    cout << "\n";
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