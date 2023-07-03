#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int count = 0;
    if (n==2 || n==3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        int x, y;
        if (n % 2 == 0)
        {
            x = n / 2;
            y = n;
            while (count != n / 2)
            {
                cout << x << " " << y << " ";
                x--;
                y--;
                count++;
            }
        }
        else
        {
            cout << n / 2 + 1 << " ";
            x = n / 2;
            y = n;
            while (count != n / 2)
            {
                cout << y << " " << x << " ";
                x--;
                y--;
                count++;
            }
        }
    }
}