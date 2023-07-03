#include <iostream>
using namespace std;
int main(){
    int n, ans;
    cin>>n;
    ans=n+1;
    while(ans>0){
    int temp = ans;    
    int one,second,third,fourth;
    fourth=ans%10;
    ans=ans/10;
    third=ans%10;
    ans=ans/10;
    second=ans%10;
    ans=ans/10;
    one=ans%10;
    if(one==second || one==third || one==fourth || second==third || second==fourth || third==fourth){
        ans=temp+1;
    }
    else {
        cout<<temp;
        break;
    }
    }
}