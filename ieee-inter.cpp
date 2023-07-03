#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    map<int,int>mpp;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=-1,sum=0;
    for (int i = 0; i < n; i++)
    {   
        sum+=arr[i];
        if(mpp.find(sum-k)!=mpp.end()){
            ans=i-mpp[sum-k];
        }
        else mpp[sum]=i;
    }
    /*for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<"\n";
    }*/
    cout<<ans;
}
