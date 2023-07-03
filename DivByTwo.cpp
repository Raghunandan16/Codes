#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    map<int,int>mpp;
    for (int i = 0; i < n; i++)
    {
        while(arr[i]>0){
            if(arr[i]>=1 && arr[i]<=n && mpp[arr[i]]==0){
                mpp[arr[i]]=1;
                break;
            }
            arr[i]=arr[i]/2;
        }
    }
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        if(mpp[arr[i]]!=1){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}