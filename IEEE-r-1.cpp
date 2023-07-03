#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string s;
    cin>>s;
    if(s=="ACM"){
        cout<<"Association for Computing Machinery";
    }
    else if(s=="IEEE"){
        cout<<"Institute of Electrical and Electronics Engineers";
    }
    else if(s=="IET"){
        cout<<"Institution of Engineering and Technology";
    }
    else cout<<"Not an organiser of Hack a BIT";
}