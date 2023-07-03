#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n, x;
    cin>>n;
    unordered_map<ll,ll>mpp;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        mpp[abs(x)]++;
    }
    int count=0;
    for(auto it:mpp){
        if(it.first==0)count++;
        if(it.first>0){
            if(it.second==1)count++;
            else count+=2;
        }
    }
    cout<<count<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
}