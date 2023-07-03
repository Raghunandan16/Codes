#include <bits/stdc++.h>
using namespace std;
const int n = 1e5+10;
int h[n];
int dp[n];
int fun(int i)
{
    int cost = INT_MAX;
    if (i == 0) return 0;
    if(dp[i]!=-1) return dp[i];
    cost = min(cost, fun(i - 1) + abs(h[i] - h[i - 1]));
    if (i > 1)
    {
        cost = min(cost, fun(i - 2) + abs(h[i] - h[i - 2]));
    }
    return dp[i]=cost;
};
int main()
{   int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << fun(n-1);
}