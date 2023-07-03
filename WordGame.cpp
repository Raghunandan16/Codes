#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<string,int>mpp;
    vector<vector<string>> vec(3, vector<string> (n, ""));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>vec[i][j];
            mpp[vec[i][j]]++;
        }
    }
    for (int i = 0; i < 3; i++)
    {   int sum=0;
        for (int j = 0; j < n; j++)
        {
            if(mpp[vec[i][j]]==1) sum+=3;
            else if(mpp[vec[i][j]]==2) sum+=1;
            else sum+=0;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}