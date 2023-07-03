#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1[s.length()];
    sort(s.begin(), s.end());
    for(int i=0; i<=s.length()/2; i++){
        s1[2*i]=s[(s.length()/2)+i];
        s1[2*i+1]=s[i];
    }
    for(auto it:s1){
        cout<<it;
    }
}