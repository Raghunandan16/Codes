#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int val1 = k * l / nl;
    int val2 = c * d;
    int val3 = p / np;
    cout << min(min(val1, val2), val3) / n;
}