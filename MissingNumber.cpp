#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, sum0, sum1=0;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin>>x;
        sum1+=x;
    }
    sum0=(n*(n+1))/2;
    cout<<sum0-sum1;
}