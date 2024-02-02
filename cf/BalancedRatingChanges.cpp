#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> vec(n);
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (abs(vec[i]) & 1)
        {
            if (vec[i] < 0)
            {
                count1++;
            }
            else
                count2++;
        }
    }
    int count = abs(count1 - count2) / 2;
    for (auto it : vec)
    {
        if (count1 > count2)
        {
            if (abs(it) & 1 && it < 0 && count != 0)
            {
                cout << it / 2 - 1 << "\n";
                count--;
            }
            else
                cout << it / 2 << "\n";
        }
        else if (count2 > count1)
        {
            if (it & 1 && it > 0 && count != 0)
            {
                cout << it / 2 + 1 << "\n";
                count--;
            }
            else
                cout << it / 2 << "\n";
        }
        else
            cout << it / 2 << "\n";
    }
}