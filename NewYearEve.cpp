#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ComputeXOR(ll n){
	if(n%4==0) return n;
	if(n%4==1) return 1;
	if(n%4==2) return n+1;
	if(n%4==3) return 0;
}
void solve(ll n,ll k){
    if(k==1){
        cout<<n;
    }
    //abe braindead, at most K hai..zaruri nhi hai ki K lena hi hai -_-
    //else if(k==n){
    //    cout<<ComputeXOR(n);
    //}
    else{
        ll pw=0;
        while(n>0){
            n>>=1;
            pw++;
        }
        //ll pw=floor(log2(n))+1;
        cout<<(ll)(pow(2,pw))-1;
    }
}
int main(){
    ll n,k;
    cin>>n>>k;
    solve(n,k);
}