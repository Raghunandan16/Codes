#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string vec;
    cin>>vec;
    vector<int>vec1;
    for (int i = 0; i < n; i++)
    {
        if(vec[i]=='0' && vec[i+1]!='0'){
            vec1[vec1.size()-2]=10*vec1[vec1.size()-2]+vec1[vec1.size()-1];
            vec1.pop_back();
        }
        else vec1.emplace_back(int(vec[i]-48));
    }
    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<char(vec1[i]+96);
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}