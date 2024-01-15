#include <bits/stdc++.h>
using namespace std;

int maxDistinctSum(vector<int> &arr, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            arr[i]--;
    }
    unordered_map<int, int> freq;
    deque<int> q;
    int sum = 0, maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        while (!q.empty() && freq[arr[i]] != 0)
        {
            freq[q.front()]--;
            sum -= q.front();
            q.pop_front();
        }
        q.push_back(arr[i]);
        freq[arr[i]]++;
        sum += arr[i];
        if (q.size() > k)
        {
            freq[q.front()]--;
            sum -= q.front();
            q.pop_front();
        }
        if (q.size() == k)
            maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxDistinctSum(arr, n, k);
    return 0;
}
