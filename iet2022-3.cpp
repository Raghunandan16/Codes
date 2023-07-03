#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int count=0;
    map<char,int>mpp;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin>>x;
        mpp[x]++;
    }
    for(auto it:mpp){
        if(it.second%2!=0){
            count++;
        }
    }
    if(count==0){
        cout<<count;
    }
    else cout<<count-1;
}