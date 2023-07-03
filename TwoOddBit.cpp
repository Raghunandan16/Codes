#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,3,4,4,5,5,5,5};
    int res1=0,res0=0;
    int xr=0;
    for (int i = 0; i < 10; i++)
    {
        xr^=arr[i];
    }
    int neg=(xr&(~(xr-1)));
    for (int i = 0; i < 10; i++)
    {
        if((neg&arr[i])!=0){
            res1^=arr[i];
        }
        else res0^=arr[i];
    }
    cout<<res0<<" "<<res1;
}