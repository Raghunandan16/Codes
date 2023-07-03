#include <iostream>
using namespace std;
int main(){
    int k, n, w;
    int cost(int, int);
    cin>>k>>n>>w;
    if(cost(k,w)>n){
    int ans = cost(k, w)-n;
    cout<<ans;}
    else cout<<0<<endl;
}
int cost(int k, int w){
    int cost= k*(w)*(w+1)/2;
    return cost;
}