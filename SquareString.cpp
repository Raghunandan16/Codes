#include <iostream>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        cin >> s;
        if (s.length() % 2 == 0)
        {
            while (j < s.length() / 2)
            {
                if (s[j] == s[j + s.length() / 2])
                {
                    j++;
                }
                else
                    break;
            }
            if (j >= s.length() / 2)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}