#include <bits/stdc++.h>
using namespace std;
#define ll long long
int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
{
    int start, end;
    start = end = 0;
    int ans = 0;
    long long product = 1;
    while (end < n)
    {
        product *= a[end];
        if (product < k)
        {
            ans += (end + 1 - start);
            end++;
        }
        else
        {
            while (product >= k && start <= end)
            {
                product /= a[start++];
            }
            ans += (end + 1 - start);
            end++;
        }
    }
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << countSubArrayProductLessThanK(a, n, k);
}