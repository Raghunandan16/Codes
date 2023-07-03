#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (2 * k - 1 <= n)
        {
            char vec[n][n];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    vec[i][j]='.';
                }
            }
            for (int i = 0; i < 2*k; i = i + 2)
            {
                vec[i][i] = 'R';
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << vec[i][j];
                }
                cout<<endl;
            }
        }
        else cout<<"-1"<<"\n";
    }
}