#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    cin>> str1>> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    for (int i = 0; i < str1.length(); i++)
    {
        if(str1[i]!=str2[i]){
            if(str1[i]>str2[i]){
                cout<<1;
                break;
            }
            if(str1[i]<str2[i]){
                cout<<-1;
                break;
            }
        }
    }
       if(str1==str2){
            cout<<0;
        }
    
    
}