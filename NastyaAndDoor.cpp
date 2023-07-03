#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    int p=0;
    int minl=0;
    for (int i = 1; i < k-1; i++)
    {
        if(vec[i]>vec[i-1] && vec[i]>vec[i+1]){
            p++;
        }
    }
    int l=0;
    int r=k-1;
    int peaks=p;
    while(r<=n-2){
        l++;
        if(vec[l]>vec[l-1] && vec[l]>vec[l+1]){
            peaks--;
        }
        if(vec[r]>vec[r-1] && vec[r]>vec[r+1]){
            peaks++;
        }
        r++;
        if(peaks>p){
            p=peaks;
            minl=l;
        }
    }
    cout<<p+1<<" "<<minl+1<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}