#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m;
    cin >> m;
    int arr[2][m];
    int p[2][m];
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
            p[i][j] = sum;
        }
    }
    int score = INT32_MAX;
    for (int i = 0; i < m; i++)
    {
        int right = p[0][m - 1] - p[0][i];
        int left = p[1][i] - arr[1][i];
        score = min(score, max(right, left));
    }
    cout << score << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}