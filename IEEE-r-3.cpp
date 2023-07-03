#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        int count = 0;
        while (count < k)
        {
            if (n % 10 != 0)
            {
                n = n - 1;
                count++;
            }
            else
            {
                n = n / 10;
                count++;
            }
        }
        cout << n << "\n";
    }
}