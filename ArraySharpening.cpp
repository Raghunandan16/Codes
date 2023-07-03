//STALK MAT KAR
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    int inc=0;
    for (int i = 0; i < n; i++)
    {
        if(vec[i]>=i){
            inc=i;
        }
        else break;
    }
    int dec=0;
    int count=0;
    for (int i = n-1; i >= 0; i--)
    {
        if(vec[i]>=count){
            dec=i;
        }
        else break;
        count++;
    }
    if(inc>=dec){
        cout<<"Yes\n";
    }
    else cout<<"NO\n";
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}