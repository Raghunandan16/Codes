class Solution
{
public:
    void Subsum(int ind, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
    {
        ans.push_back(ds);
        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i] == arr[i - 1])
            {
                continue;
            }
            ds.push_back(arr[i]);
            Subsum(i + 1, arr, ds, ans);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> ds;
        vector<vector<int>> ans;
        Subsum(0, nums, ds, ans);
        return ans;
    }
};