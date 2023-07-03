#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    bool flag=false;
    for (int num = 0; num < (1<<n); num++)
    {
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            if(num & (1<<i)) sum=sum+vec[i];
            else sum=sum-vec[i];
        }
        if(sum%360==0){
            flag=true;
            break;
        }
        
    }
    if(flag==true) cout<<"yes";
    else cout<<"no";
}