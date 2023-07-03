#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s;
    cin >> s;
    char c;
    cin >> c;
    int n = s.length();
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        if (s[i] == c)
        {
            l = i;
            r = n - 1 - i;
            if(l%2==0 && r%2==0){
                flag=true;
                break;
            }
        }
    }
    if(flag==true){
        cout<<"YES"<<"\n";
    }
    if(flag==false){
        cout<<"NO"<<"\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}