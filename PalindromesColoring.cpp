#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>mpp;
    int a=0,b=0; // a-> pairs , b-> no of individuals
    for (int i = 0; i < n; i++)
    {
        mpp[s[i]]++;
    }
    for ( char i = 'a'; i <= 'z'; i++)
    {
        if(mpp[i]%2==1) b++;
        a+=mpp[i]/2;
    }
    int a1=2*(a/k); // no of pairs coloured by 1 colour
    b+=2*(a%k);     // no of individuals
    if(b>=k) a1++;
    cout<<a1<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}