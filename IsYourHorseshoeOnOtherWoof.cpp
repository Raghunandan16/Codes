#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    int s;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        st.insert(s);
    }
    int ans = n-st.size();
    cout<<ans;
}