// https://practice.geeksforgeeks.org/problems/shortest-source-to-destination-path3544/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int shortestDistance(int n, int m, vector<vector<int>> arr, int x, int y)
    {
        // code here
        if (arr[0][0] == 0)
            return -1;
        if (x == 0 && y == 0)
            return 0;
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;
        queue<pair<int, pair<int, int>>> q;
        q.push({0, {0, 0}});

        while (!q.empty())
        {
            int val = q.front().first;
            int r = q.front().second.first;
            int c = q.front().second.second;
            q.pop();

            int arow[] = {-1, 0, 1, 0};
            int acol[] = {0, 1, 0, -1};

            for (int i = 0; i < 4; i++)
            {
                int nrow = r + arow[i];
                int ncol = c + acol[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && arr[nrow][ncol] == 1)
                {
                    if (val + 1 < dist[nrow][ncol])
                    {
                        dist[nrow][ncol] = 1 + val;
                        if (nrow == x && ncol == y)
                            return 1 + val;
                        q.push({1 + val, {nrow, ncol}});
                    }
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends