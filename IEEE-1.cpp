#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<char,int>mpp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        mpp[s[0]]++;
    }
    int count=0;
    for(auto it:mpp){
        if(it.second%2==0){
            if(it.second>2){
                int x=it.second/2;
                count+=x*(x-1);
            }
        }
        else{
            if(it.second>2){
                int x,y;
                x=it.second/2+1;
                y=it.second/2;
                count+=(x*(x-1)/2)+(y*(y-1)/2);
            }
        }
    }
    cout<<count;
}