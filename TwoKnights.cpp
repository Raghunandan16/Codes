#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    // n^2C2 total no of ways
    // 2*3 ->(n-1)horizontal, (n-2)vertical
    // attack 2*(n-1)(n-2)
    // same for 3*2
    // so total=2*2*(n-1)(n-2)
    for (ll i = 1; i <= n; i++)
    {
        cout << (i * i) * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << "\n";
    }
}