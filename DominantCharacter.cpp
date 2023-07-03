#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> vec;
    bool b1 = false, b2 = false, b3 = false, b4 = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            vec.emplace_back(i);
        }
    }
    if(vec.size()==0 || vec.size()==1){
        cout<<"-1\n";
        return;
    }
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i + 1] - vec[i] == 1)
        {
            b1 = true;
            break;
        }
        else if (vec[i + 1] - vec[i] == 2)
        {
            b2 = true;
        }
        else if (vec[i + 1] - vec[i] == 3)
        {
            if (s[vec[i] + 1] != s[vec[i] + 2])
            {
                b3 = true;
            }
            else
            {
                if (i + 1 < vec.size() - 1)
                {
                    if (vec[i + 2] - vec[i + 1] == 3)
                    {
                        if (s[vec[i + 1] + 1] == s[vec[i + 1] + 2])
                        {
                            if (s[vec[i + 1] + 1] != s[vec[i] + 1])
                            {
                                b4 = true;
                            }
                        }
                    }
                }
            }
        }
    }
    if (b1)
        cout << "2\n";
    else if (b2)
        cout << "3\n";
    else if (b3)
        cout << "4\n";
    else if (b4)
        cout << "7\n";
    else
        cout << "-1\n";
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