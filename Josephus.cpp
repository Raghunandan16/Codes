#include<bits/stdc++.h>
using namespace std;
int josh(int n, int k){
    if(n==1) return 0;
    else{
        return (josh(n-1,k)+k)%n;
    }
}
int main(){
    int n, k;
    cin>>n>>k;
    cout<<josh(n,k);
}