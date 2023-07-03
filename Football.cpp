#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int maxm0 = -1;
    int max1 = -1;
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i=0; i<s.length(); i++)
    {
        if (s[i]=='0')
        {
            cnt0++;
            maxm0 = max(maxm0, cnt0);
            cnt1 = 0;
            if (maxm0 >= 7)
            {
                break;
            }
        }
        else
        {
            cnt1++;
            max1 = max(max1, cnt1);
            cnt0 = 0;
            if (max1 >= 7)
            {
                break;
            }
        }
    }
    if (maxm0 >= 7 || max1 >= 7)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}