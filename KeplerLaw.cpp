#include <bits/stdc++.h>
using namespace std;
void solve(){
    int t1,t2,r1,r2;
    cin>>t1>>t2>>r1>>r2;
    double T1,T2,R1,R2,k1,k2;
     T1=t1*t1;
     T2=t2*t2;
     R1=r1*r1*r1;
     R2=r2*r2*r2;
     k1=T1/R1;
     k2=T2/R2;
    if(k1==k2){
        cout<<"YES"<<"\n";}
    else cout<<"NO"<<"\n";
}
int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}