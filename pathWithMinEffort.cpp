// https://leetcode.com/problems/path-with-minimum-effort/
class Solution
{
public:
    int minimumEffortPath(vector<vector<int>> &heights)
    {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        pq.push({0, {0, 0}});
        dist[0][0] = 0;
        while (!pq.empty())
        {
            int val = pq.top().first;
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            if (r == n - 1 && c == m - 1)
                return val;
            pq.pop();

            int arow[] = {-1, 0, 1, 0};
            int acol[] = {0, 1, 0, -1};

            for (int i = 0; i < 4; i++)
            {
                int nrow = r + arow[i];
                int ncol = c + acol[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m)
                {
                    int h = abs(heights[nrow][ncol] - heights[r][c]);
                    h = max(val, h);
                    if (h < dist[nrow][ncol])
                    {
                        dist[nrow][ncol] = h;
                        pq.push({h, {nrow, ncol}});
                    }
                }
            }
        }
        return -1;
    }
};