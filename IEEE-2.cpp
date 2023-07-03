#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll sum = 0, count;
        ll arr[10];
        for (int i = 0; i < 10; i++)
        {
            arr[i] = x * (i + 1);
            sum += arr[i]%10;
        }
        count = sum *(n / (10*x));
        for (int i = 0; i < (n%(10*x))/x; i++)
        {
            count+=arr[i]%10;
        }
        cout<<count<<"\n";
    }
}