#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,l;
    cin>>n>>l;
    char arr[n][l];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        string str=bitset<30>(a).to_string();
        for (int j = 0; j<l ; j++)
        {
            arr[i][j]=str[29-j];
        }
        
    }
    int arr1[l];
    for (int i = 0; i < l; i++)
    {   int count0=0;
        int count1=0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j][i]=='0'){
                count0++;
            }
            else count1++;
        }
        if(count0>count1){
            arr1[i]=0;
        }
        else arr1[i]=1;
    }
    int count=1,sum=0;
    for (int i = 0; i < l; i++)
    {
        sum=sum+arr1[i]*count;
        count=2*count;
    }
    cout<<sum<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}