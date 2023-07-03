#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,d,day=1,count=1;
    cin>>n>>d;
    while(day<=d && count<n){
        if(day<=10){
            if(2*count>n){
                count=n;
                break;
            }
            else {count=2*count;
            day++;}
        }
        else if(day>=11){
            if(3*count>n){
                count=n;
                break;
            }
            else{count=3*count;
            day++;}
        }
    }
    cout<<count<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}