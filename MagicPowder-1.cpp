#include <bits/stdc++.h>
using namespace std;
bool check(int mid,vector<int>v1,vector<int>v2,int k,int n){
    int cost=0;
    for (int i = 0; i < n; i++)
    {
        if(mid*v1[i]-v2[i]>0){
            cost+=(mid*v1[i]-v2[i]);
        }
    }
    if(cost<=k){
        return true;
    }
    return false;
    
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    int start=0,end=1e9;
    int mid,ans=0;
    while(start<=end){
        mid=start+(end-start)/2;
        if(check(mid,v1,v2,k,n)==true){
            ans=mid;
            start=mid+1;
        }
        else end=mid-1;
    }
    cout<<ans;
}
int main()
{
    solve();
}