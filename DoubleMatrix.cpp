#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec1(n, vector<int>(m, 0));
    vector<vector<int>> vec2(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x = min(vec1[i][j], vec2[i][j]);
            int y = max(vec1[i][j], vec2[i][j]);
            vec1[i][j] = x;
            vec2[i][j] = y;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if ((vec1[i][j] <= vec1[i][j - 1]) || (vec2[i][j] <= vec2[i][j - 1]))
            {
                cout << "Impossible";
                return;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((vec1[i][j] <= vec1[i - 1][j]) || (vec2[i][j] <= vec2[i - 1][j]))
            {
                cout << "Impossible";
                return;
            }
        }
    }
    cout << "Possible";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}