#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool flag=false;
void subsum(ll ind,ll sum,vector<ll>&vec,vector<ll>&ds,vector<vector<ll>>&arr){
    if(ind==vec.size()){
        if(sum==0){
            arr.push_back(ds);
            flag=true;
        }
        if(sum!=0){
            return;
        }
    }if(flag==false){
    if(vec[ind]<=sum){
        ds.push_back(vec[ind]);
        subsum(ind+1,sum-vec[ind],vec,ds,arr);
        ds.pop_back();
    }
    subsum(ind+1,sum,vec,ds,arr);}
}
int main(){
    ll n;
    cin>>n;
    if((n*(n+1)/2)%2!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<"\n";
    map<ll,ll>mpp;
    vector<ll>vec(n);
    vector<vector<ll>>arr;
    for (ll i = 0; i < n; i++)
    {
        vec[i]=i+1;
    }
    vector<ll>ds;
    subsum(0,n*(n+1)/4,vec,ds,arr);
    cout<<arr[0].size()<<"\n";
    for (ll i = 0; i < arr[0].size(); i++)
    {
        cout<<arr[0][i]<<" ";
        mpp[arr[0][i]]++;
    }
    cout<<"\n";
    cout<<n-arr[0].size()<<"\n";
    for (ll i = 0; i < n; i++)
    {
        if(mpp[vec[i]]==0){
            cout<<vec[i]<<" ";
        }
    }}
}