#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string k,s;
        int time=0;
        cin>>k>>s;
        vector<char>vec;
        for (int i = 0; i < k.length(); i++)
        {
            vec.emplace_back(k[i]);
        }
        
        for (int i = 1; i < s.length(); i++)
        {
            time+=abs(find(vec.begin(), vec.end(),s[i])-find(vec.begin(), vec.end(),s[i-1]));
        }
        cout<<time<<"\n";
    }
}