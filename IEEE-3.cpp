#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll MinimumSum(ll ind, ll arr[], ll n, ll subsum, ll sum){
    if(ind==0){
        return abs((sum-subsum)-subsum);
    }
    return min(MinimumSum(ind-1,arr,n,subsum+arr[ind-1],sum), MinimumSum(ind-1,arr,n,subsum,sum));
}
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<MinimumSum(n,arr,n,0,sum);
}