#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void algo(ll n){
    if(n==1){
        cout<<"1";
    }
    if(n>1){
        if(n%2==0){
            cout<<n<<" ";
            algo(n/2);
        }
        else{
            cout<<n<<" ";
            algo(3*n+1);
        }
    }

}
int main(){
    ll n;
    cin>>n;
    algo(n);
}