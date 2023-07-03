#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>vec(m);
    int minm=INT_MAX;
     for (int i = 0; i < m; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i <=m-n; i++)
    {
        minm=min(minm,vec[i+n-1]-vec[i]);
    }
    cout<<minm<<endl;
}
int main(){
   solve();
}