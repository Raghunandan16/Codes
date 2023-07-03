#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n;
    map<int, int> mpp;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> p;
        mpp[p] = i;
    }
    for (auto it : mpp)
    {
        cout << it.second << " ";
    }
}