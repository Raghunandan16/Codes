#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int j = 0; j < T; j++)
    {
        int n;
        cin >> n;
        int count = 0;
        int max = 0;
        int maxm;
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                maxm = i;
                break;
            }
        }
        cout << maxm << endl;
    }
}