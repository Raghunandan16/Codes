#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int x,ans=-1;
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(m[x]!=0){
            ans=max(ans,(m[x]+n-i-1));
        }
        m[x]=i+1;
    }
    cout<<ans<<"\n";
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}