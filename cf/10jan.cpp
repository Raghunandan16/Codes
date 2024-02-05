#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+c==2*b){ cout<<"YES"<<"\n";}
    else {
        if(a+c>2*b){
        if((a+c)%(2*b)==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    else if(a+c<2*b){
          if((2*b-c)%a==0) cout<<"YES"<<"\n";
          else if((2*b-a)%c==0) cout<<"YES"<<"\n";
          else cout<<"NO"<<"\n";
    }}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
