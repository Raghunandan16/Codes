#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int up = 0, low;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            up++;
        }
    }
    low = s.length() - up;
    if (up > low)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
}