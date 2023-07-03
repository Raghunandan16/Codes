#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    ll sum = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < arr[i - 1])
        {
            sum = sum + (arr[i - 1] - arr[i]);
            arr[i]=arr[i-1];
        }
    }
    cout << sum;
}