// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
// https://leetcode.com/problems/longest-consecutive-sequence/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> st;
        for (auto it : nums)
        {
            st.insert(it);
        }
        int maxl = 0;
        for (auto it : st)
        {
            if (st.find(it - 1) != st.end())
            {
                continue;
            }
            else
            {
                int temp = 1;
                int num = it;
                while (st.find(++num) != st.end())
                {
                    temp++;
                }
                maxl = max(maxl, temp);
            }
        }
        return maxl;
    }
};