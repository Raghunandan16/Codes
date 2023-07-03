#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        mpp[vec[i]]++;
    }
    int ind = n - 1;
    while (vec[ind] >= vec[ind - 1] && ind > 0)
    {
        mpp[vec[ind]]--;
        ind--;
    }
    mpp[vec[ind]]--;
    int ind2 = ind;
    for (int i = n - 1; i >= ind; i--)
    {
        if (mpp[vec[i]] > 0)
        {
            ind2 = i;
            break;
        }
    }
    set<int> st;
    for (int i = 0; i < ind2; i++)
    {
        st.insert(vec[i]);
    }
    cout << st.size() << "\n";
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