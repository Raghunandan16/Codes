#include <bits/stdc++.h>
using namespace std;
#define ll long long;
void solve(){
    int n;
    cin>>n;
    cout<<2<<endl;
    float sum=n;
    while(n!=1){
        cout<<sum<<" "<<n-1<<endl;
        sum=ceil((sum+n-1)/2);
        n--;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}