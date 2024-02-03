#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        string s;
        cin >> s;
        vector<string> v(10, "");
        vector<vector<int>> vec(10);

        for (int i = 0; i < s.size(); i++)
        {
            vec[(int)s[i] - 48].push_back(i);
        }
        int l = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                v[i] += to_string(i + 48);
                while (l < v[i][j])
                {
                    if (s[l] == '9')
                    {
                        v[i] += to_string(9);
                    }
                    else
                    {
                        v[(int)s[l] - 47] += to_string((int)s[l] - 47);
                    }
                    l++;
                }
            }
        }

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                cout << vec[i][j];
            }
        }
        cout << endl;
    }
}