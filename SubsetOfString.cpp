#include<bits/stdc++.h>
using namespace std;
void subset(string s, string output,int ind){
    if(ind==s.length()) {
        cout<<output<<" ";
        return;
    }
    subset(s,output,ind+1);
    subset(s,output+s[ind],ind+1);
}
int main(){
    string s;
    cin>>s;
    string output= "";
    subset(s,output,0);
}