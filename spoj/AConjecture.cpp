#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

bool isPrime(int n)
{
    if (n == 2 || n == 3)
    {
        return true;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}
int main()
{
    vi vec;
    for (int i = 1; i * i < 10000000; i++)
    {
        for (int j = 1; j * j * j * j < 10000000; j++)
        {
            int x = i * i + j * j * j * j;
            if (x > 10000000)
                break;
            if (isPrime(x))
            {
                vec.push_back(x);
            }
        }
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            int x = lower_bound(vec.begin(), vec.end(), n) - vec.begin();
            if (vec[x] == n)
                x++;
            cout << x << "\n";
        }
    }
}