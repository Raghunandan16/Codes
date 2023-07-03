#include <iostream>
using namespace std;
#define ll long long int
int main(){
    ll n, ans;
    cin>>n;
    if(n%2==0){
        ans=n/2;
    }
    else {ans=-1*(n+1)/2;}
    cout<<ans;}