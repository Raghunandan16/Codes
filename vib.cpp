#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char> vec;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            vec.push_back(s[i] + 32);
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            vec.push_back(s[i] - 32);
        }
        else if (s[i] >= 48 && s[i] <= 57)
        {
            vec.push_back('0');
        }
        else
        {
            vec.push_back('*');
        }
    }
    for (auto it : vec)
    {
        cout << it;
    }
}