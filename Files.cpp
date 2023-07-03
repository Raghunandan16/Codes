#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, k;
        cin >> n >> k;
        ll count = 0, cur = 1;
        while (cur < k)
        {
            cur *= 2;
            count++;
        }
        if (cur < n)
        {
            count += (n - cur + k - 1) / k;
        }
        cout << count << endl;
    }
}