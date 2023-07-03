#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin>>a>>b;
    ll x=__gcd(a,b);
    ll y=(a*b)/x;
    cout<<y;
}