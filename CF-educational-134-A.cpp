#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    map<char,int>mpp;
    for (int i = 0; i < 4; i++)
    {
        char x;
        cin>>x;
        mpp[x]++;
    }
    cout<<mpp.size()-1<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}