#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n>>x;
    int pre;
    if (n-1 % 4 == 0)
        pre= n-1;
    if (n-1 % 4 == 1)
        pre= 1;
    if (n-1 % 4 == 2)
        pre =n;
    else pre=0;
    bitset<17>b2(pre);
    bitset<17> b(x);
    vector<int>vec;
    for (int i = 0; i <= (int)log2(x)+1; i++)
    {
        if(b[i]==0){
            if(b2[i]==0){
                vec.emplace_back(0);
            }
            else vec.emplace_back(1);
        }
        else {
            if(b2[i]==0){
                vec.emplace_back(1);
            }
            else vec.emplace_back(0);
        }
    }
    int final=0;
    int power=1;
    for (int i = 0; i < vec.size(); i++)
    {
        final=final+vec[i]*power;
        power=power*2;
    }
    for (int i = 1; i <= n-1; i++)
    {
        cout<<i<<" ";
    }
    cout<<final<<"\n";
}
int main(){
    int t;
    cin>>t;
    solve();
}