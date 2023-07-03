#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll final=0;
    ll j=0;
    do
    {
        ll sum=arr[0];
        for (int i = 1; i < n; i++)
        {
            sum+=abs(arr[i]-arr[i-1]);
        }
        j++;
        final+=sum;
    } while (next_permutation(arr, arr + n));
    ll z=__gcd(final,j);
    j=j/z;
    final=final/z;
    cout<<final<<"/"<<j;
}