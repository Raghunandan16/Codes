#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a=n,b=n,c=n;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0){
            a=i;
            break;
        }
    }
    n=n/a;
    for (int i = 2; i*i<=n; i++)
    {
        if(n%i==0){
            if(i!=a){
                b=min(b,i);
            }
            if(n/i!=i && n/i!=a){
                b=min(b,n/i);
            }
        }
    }
    c=n/b;
    if(c>1 && a!=b && b!=c && c!=a){
        cout<<"YES"<<"\n";
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    else cout<<"NO"<<"\n";
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}