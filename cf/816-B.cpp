#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<ll> vec(n);
        if (b * k > s || b * k + n * (k - 1) < s)
            cout << "-1" << endl;
        else
        {
            vec[0]=b*k;
            s = s - b * k;
            n--;
            ll i=1;
            while (n--)
            {
                vec[i]=min(s,k-1);
                s-=min(s,k-1);
                if(s==0) break;
                i++;
            }
            if(s>0) vec[0]+=s;
            for (auto it : vec)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
    }
}
