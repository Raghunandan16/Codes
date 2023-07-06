#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int mini = INT_MAX;
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == nums[low] && nums[mid] == nums[high])
            {
                low++;
                high--;
                mini = min(nums[mid], mini);
                continue;
            }
            // left
            if (nums[low] <= nums[mid])
            {
                mini = min(mini, nums[low]);
                low = mid + 1;
            }
            else
            {
                mini = min(mini, nums[mid]);
                high = mid - 1;
            }
        }
        return mini;
    }
};