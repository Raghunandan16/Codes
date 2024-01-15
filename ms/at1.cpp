#include <bits/stdc++.h>
using namespace std;

int maximumLearning(vector<int> iv, vector<int> articles, int p)
{
    int n = iv.size();
    vector<int> dp(p + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = p; j >= articles[i] * 2; j--)
        {
            dp[j] = max(dp[j], dp[j - articles[i] * 2] + iv[i]);
        }
    }
    return dp[p];
}

int main()
{
    vector<int> articles = {2, 2, 3, 4};
    vector<int> iv = {2, 4, 4, 5};
    int p = 15;
    int result = maximumLearning(iv, articles, p);
    cout << result << endl;
}
