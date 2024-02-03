#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, m, a, b, d;
    cin >> n >> m >> a >> b >> d;
    if(a-d>1 && b+d<m){
        cout<<n+m-2<<endl;
    }
    else if(b-d>1 && a+d<n){
        cout<<n+m-2<<endl;
    }
    else cout<<-1<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}