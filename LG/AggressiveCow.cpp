#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool possible(vector<ll>vec,int c,ll mid,int n){
    int count=1;
    ll last=vec[0];
    for (int i = 0; i <n; i++)
    {
        if(vec[i]-last>=mid){
            count++;
            last=vec[i];
        }
        if(count==c) return true;
    }
    return false;
    
}
void solve(){
    int n,c;
    cin>>n>>c;
    vector<ll>vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.begin()+n);
    ll s=0;
    ll e=vec[n-1]-vec[0];
    ll ans=-1;
    while(s<=e){
        ll mid = s+(e-s)/2;
        if(possible(vec,c,mid,n)==true){
            ans=mid;
            s=mid+1;
        }
         else e=mid-1;
    }
    cout<<ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}