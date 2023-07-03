#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int solve()
{
  ll l, r, a;
  cin >> l >> r >> a;

  ll left = l / a;
  ll lmod = l % a;
  ll right = r / a;
  ll rmod = r % a;

  if (left == right)
    return rmod + right;

  return max(right + rmod, right + a - 2);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=solve();
        cout<<ans<<"\n";
    }
}