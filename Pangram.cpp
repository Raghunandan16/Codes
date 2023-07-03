#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s, str;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), :: tolower);
    str="abcdefghijklmnopqrstuvwxyz";
    if(n>=26){
        int i=0;
        while(i<26){
           int j=0;
           while(j<n){
               if(str[i]==s[j]){
                   break;
               }
               else j++;
           }
           if(j==n){
               break;
           }
           else i++;
               
        }
        if(i==26){
            cout<<"YES";
        }
        else cout<<"NO";

    }
    else cout<<"NO";
   
}