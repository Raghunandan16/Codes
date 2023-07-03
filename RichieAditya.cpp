#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll count = 0;
    ll temp = 0;
    while (temp < m)
    {
        if (m - temp > 0 )
        {
            if(m-temp>=k){
            count += arr[n - 1] * k;
            temp += k;}
            else if(m-temp<k){
                count+=arr[n-1]*(m-temp);
                temp=m;
            }
        }
        if (temp < m)
        {
            count += arr[n - 2];
            temp+=1;
        }
    }
    cout << count << endl;
}