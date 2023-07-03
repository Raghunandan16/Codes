#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "Even"
                 << "\n";
        }
        else
            cout << "Odd"
                 << "\n";
    }
}