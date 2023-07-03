#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<char> vec(n);
    vector<int> sol;
    ll sum=0;
    ll m;
    if(n&1){
        m=n/2;
        sum=n*(n-1)-m*m;
    }
    else{
        m=n/2-1;
        sum=n*(n-1)-m*(m+1);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if((i<n/2 && vec[i]=='L') || (i>=n/2 && vec[i]=='R')){
            sum-=abs(n-1-2*i);
            sol.emplace_back(abs(n-1-2*i));
        }
    }
    sort(sol.begin(),sol.end());
    int i=sol.size()-1;
    while(n--){
        if(i>=0){
            sum+=sol[i];
            cout<<sum<<" ";
            i--;
        }
        else{
            cout<<sum<<" ";
        }
    }
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}