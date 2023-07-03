#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mx=0;
    int mxx=0;
    map<int,int>mpp;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        mpp[x]++;
        if(mpp[x]>mxx){
            mxx=mpp[x];
            mx=x;
        }
    }
    cout<<mx;
}