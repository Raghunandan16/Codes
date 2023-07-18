// https://leetcode.com/problems/house-robber/submissions/997947502/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int money(int ind, vector<int> &nums, vector<int> &dp)
    {
        if (ind == 0)
            return nums[0];
        if (ind == -1)
            return 0;
        if (dp[ind] != -1)
            return dp[ind];
        return dp[ind] = max(nums[ind] + money(ind - 2, nums, dp), money(ind - 1, nums, dp));
    }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, -1);
        return money(n - 1, nums, dp);
    }
};