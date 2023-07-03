#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void bit(int i, int n, vector<int> &ds)
{
    if (i == n)
    {

        for (auto it : ds)
        {
            cout << it;
        }
        cout << "\n";
        return;
    }
    ds.push_back(0);
    bit(i + 1, n, ds);
    for (int q = i; q < n; q++)
    {
        ds.pop_back();
    }
    ds.push_back(1);
    bit(i + 1, n, ds);
}
int main()
{
    int n;
    cin >> n;
    vector<int> ds;
    bit(0, n, ds);
}