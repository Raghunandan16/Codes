#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>vec1(n);
    vector<int>vec2(n);
    
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        vec1[a-1]=b-1;
        vec2[b-1]=b-1;
    }
    // sort(vec2.begin(), vec2.end());
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        if(vec1[i]==vec2[i]){
            continue;
        }
        else{
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"Happy Alex";
    }
    else cout<<"Poor Alex";
    
    
}