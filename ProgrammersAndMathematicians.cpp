#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,d;
    cin>>a>>b;
    if(a==b){
        d=(a+b)/4;
        cout<<d<<"\n";
    }
    else if(a>b){
        d=a-b;
        a=a-d;
        d=d/2;
        d=min(d,a);
        a-=d;
        b-=d;
        d=d+(a+b)/4;
        cout<<d<<"\n";
    }
    else{
        d=b-a;
        b=b-d;
        d=d/2;
        d=min(d,b);
        b-=d;
        a-=d;
        d=d+(a+b)/4;
        cout<<d<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}