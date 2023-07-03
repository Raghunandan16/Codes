#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Uniquesum(vector<ll>&arr,ll k){
    unordered_map<ll,ll>mpp;
    ll ans=0;
    ll psum=0;
    for (int i = 0; i < arr.size(); i++)
    {
        psum=psum+arr[i];
        if(psum==k){
            ans++;
        }
        if(mpp.find(psum-k)!=mpp.end()){
            ans=ans+mpp[psum-k];
        }
        mpp[psum]++;
    }
    return ans;
}
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    cout<<Uniquesum(vec,k);
}