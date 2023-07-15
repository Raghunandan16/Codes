// https://practice.geeksforgeeks.org/problems/combination-sum-ii/1
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void combination(int ind, vector<int> &ds, int target, vector<int> &arr, vector<vector<int>> &ans)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            ds.push_back(arr[i]);
            combination(i + 1, ds, target - arr[i], arr, ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &arr, int target)
    {
        sort(arr.begin(), arr.end());
        vector<int> ds;
        vector<vector<int>> ans;
        combination(0, ds, target, arr, ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++)
        {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++)
            {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends