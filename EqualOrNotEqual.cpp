#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int count1=0,count2=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'E')
                count1++;
            if (s[i] == 'N')
            {
                count2++;
                if(count2>1) break;
            }
        }
        if(count2==1)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}