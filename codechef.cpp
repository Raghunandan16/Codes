#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Andoruni problem of starters codechef 2022
//TLE 
int main() {
	int t;
    cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	    } 
	    set<int>st;
	    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            st.emplace(a[i]&a[j]);
        }
	    }
	    while(st.size()>1){
	        int min=*st.begin();
	        int max=*st.rbegin();
	        st.erase(st.begin());
	        st.erase(--st.end());
	        st.emplace(min|max);
	    }
        cout<<*st.begin()<<"\n";
	}
	return 0;
}

