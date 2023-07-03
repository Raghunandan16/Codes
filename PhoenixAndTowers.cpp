#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    priority_queue<pair<int, int>> pq;
    map<pair<int, int>, int> mpp;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        vec[i] = y;
        pq.push({y, i});
    }
    set<pair<int, int>> st;
    int z = m;
    while (z != 0)
    {
        st.insert({pq.top().first, z});
        mpp[pq.top()] = z;
        pq.pop();
        z--;
    }
    while (!pq.empty())
    {
        auto it = st.begin();
        pair<int, int> temp;
        temp.first = it->first + pq.top().first;
        temp.second = it->second;
        mpp[pq.top()] = it->second;
        st.erase(it);
        st.insert(temp);
        pq.pop();
    }
    auto it1 = st.begin();
    auto it2 = st.rbegin();
    if (it2->first - it1->first <= x)
    {
        cout << "YES \n";
        for (int i = 0; i < n; i++)
        {
            cout << mpp[{vec[i], i}] << " ";
        }
        cout << "\n";
    }
    else
        cout << "NO \n";
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