#include <iostream>
using namespace std;
int main(){
    int n, ans;
    cin>>n;
    if(n%5==0){
        ans=n/5;
    }
    else ans=n/5+1;
    cout<<ans;
}
