#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    map<ll, ll> mpp;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        mpp[x] += i;
    }
    for (int i = 0; i < q; i++)
    {
        ll y;
        cin >> y;
        /*auto it = mpp.find(y);
        if (mpp.find(y) == mpp.end())
        {
            cout<<0<<"\n";
        }
        else
        {
            cout << it->second << "\n";
        }*/
        cout<<mpp[y]<<"\n";
    }
}