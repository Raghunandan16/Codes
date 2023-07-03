#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int p, q, p1, q1;
    cin>>p;
    set <int> st;
    for (int i = 0; i < p; i++)
    {
        cin>>p1;
        st.insert(p1);

    }
    cin>>q;
      for (int j = 0; j < q; j++)
    {
        cin>>q1;
        st.insert(q1);
    }
    int c = 1;
    while( c <=n)
    {
        auto it=st.find(c);
        if(*it==c){
            c++;
        }
        else break;
    }
    if(c>n){
        cout<<"I become the guy.";
    }
    else cout<<"Oh, my keyboard!";
    
}