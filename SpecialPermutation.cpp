#include <bits/stdc++.h>
using namespace std;
void solve(int n, int a, int b)
{
    int l, r;
    l = n - b;
    r = a - 1;
    if (l > n / 2 or r > n / 2)
    {
        cout << "-1"<<"\n";
        return;
    }
    vector<int> vec(n);
    int indx=0;
    for (int i = b+1; i <=n; i++) vec[indx++]=i;
    for (int i =1 ; i <a; i++) vec[n-i]=i;
    for (int i = a; i <=b; i++) vec[indx++]=i;
    int mx=INT_MIN;
    int mn=INT_MAX;
    for (int i = 0; i < n/2; i++)mn=min(mn,vec[i]);
    for (int i = n/2; i <n; i++)mx=max(mx,vec[i]);
    if(a!=mn || b!=mx){
        cout<<"-1"<<"\n";
        return;
    }
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        solve(n,a,b);
    }
}