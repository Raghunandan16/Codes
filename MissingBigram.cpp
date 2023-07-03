#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    char vec[n-2][2];
    for (int i = 0; i < n-2; i++)
    {
        for (int j = 0; j<2; j++)
        {
           cin>> vec[i][j];
        }
        
    }
    if(n==3){
        cout<<"a"<<vec[0][0]<<vec[0][1];
    }
    else{int ind;
    for (int i = 0; i < n-2-1; i++)
    {
        if(vec[i][1]==vec[i+1][0]){
            ind=i+1;
        }
        else{
            ind=i;
            break;
        }
    }
    if(ind==n-2-1){
        cout<<"a"<<vec[0][0]<<vec[0][1];
        for (int i = 1; i < n-2; i++)
        {
            cout<<vec[i][1];
        }
    }
    else {
        cout<<vec[0][0]<<vec[0][1];
        for (int i = 1; i <=ind; i++)
        {
            cout<<vec[i][1];
        }
        cout<<vec[ind+1][0]<<vec[ind+1][1];
        for (int i = ind+2; i < n-2; i++)
        {
            cout<<vec[i][1];
        }
    }}
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();}
    return 0;
}