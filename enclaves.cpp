// https://practice.geeksforgeeks.org/problems/number-of-enclaves/1
//{ Driver Code Starts
//  Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void dfs(int i, int j, int arow[], int acol[], vector<vector<int>> &grid, vector<vector<int>> &vis)
    {
        vis[i][j] = 1;
        int n = grid.size();
        int m = grid[0].size();
        for (int x = 0; x < 4; x++)
        {
            int nrow = i + arow[x];
            int ncol = j + acol[x];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && !vis[nrow][ncol])
            {
                dfs(nrow, ncol, arow, acol, grid, vis);
            }
        }
    }
    int numberOfEnclaves(vector<vector<int>> &grid)
    {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int arow[4] = {-1, 0, 1, 0};
        int acol[4] = {0, 1, 0, -1};
        // row
        for (int j = 0; j < m; j++)
        {
            if (!vis[0][j] && grid[0][j] == 1)
                dfs(0, j, arow, acol, grid, vis);
            if (!vis[n - 1][j] && grid[n - 1][j] == 1)
                dfs(n - 1, j, arow, acol, grid, vis);
        }
        // column
        for (int i = 0; i < n; i++)
        {
            if (grid[i][0] == 1 && !vis[i][0])
                dfs(i, 0, arow, acol, grid, vis);
            if (grid[i][m - 1] == 1 && !vis[i][m - 1])
                dfs(i, m - 1, arow, acol, grid, vis);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1 && !vis[i][j])
                    count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends