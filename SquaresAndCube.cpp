#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        set<int>st;
        for (int j = 1; j*j <= a; j++)
        {
            st.insert(j*j);
        }
         for (int j = 1; j*j*j<= a; j++)
        {
            st.insert(j*j*j);
        }
        cout<<st.size()<<endl;
    }
    
}