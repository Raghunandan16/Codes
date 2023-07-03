#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s.length()<2){
        cout<<"NO"<<"\n";
    }
    else {
        int indx=-1;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='1'){
                indx=i;
                break;
            }
        }
        if(indx==-1 || indx==s.length()-1) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}