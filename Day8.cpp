#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string, int>mpp;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string k; int v;
        cin>>k>>v;
        mpp[k]=v;
    }
    vector<string>vec;
    string s;
    while(cin>>s){
        vec.push_back(s);
    }
    for(int i=0; i<vec.size(); i++){
        auto it=mpp.find(vec[i]);
        if(it->first==vec[i]){
            cout<<it->first<<"="<<it->second<<endl;
        }
        else cout<<"Not found"<<endl;
    }
     
    return 0;
}