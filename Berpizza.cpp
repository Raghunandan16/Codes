#include <bits/stdc++.h>
using namespace std;
class Compare
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};
void solve()
{
    int q;
    cin >> q;
    int count = 1;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
    queue<pair<int, int>> qe;
    map<pair<int, int>, int> mpp;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int y;
            cin >> y;
            pair<int, int> temp;
            temp.first = y;
            temp.second = count;
            pq.push(temp);
            qe.push(temp);
            count++;
        }
        else if (x == 2)
        {
            while (mpp[qe.front()] != 0)
            {
                qe.pop();
            }
            cout << qe.front().second << " ";
            mpp[qe.front()]++;
            qe.pop();
        }
        else
        {
            while (mpp[pq.top()] != 0)
            {
                pq.pop();
            }
            cout << pq.top().second << " ";
            mpp[pq.top()]++;
            pq.pop();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}