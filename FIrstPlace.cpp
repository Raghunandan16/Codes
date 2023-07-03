#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int k=n;
    int j=2;
    map< int,int > mpp;
    while(n>1){
        if(n%j==0){
            n=n/j;
            mpp[j]++;
        }
        else{  
            j++;
            n=k;
        }
    }
    auto it=mpp.rbegin();
    cout<<it->first;
    
return 0;
}