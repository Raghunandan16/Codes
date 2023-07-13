// https://practice.geeksforgeeks.org/problems/f04fd67b26b4828b6180715d8b1700426b637247/1
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isFeasible(int arr[], int N, int K, int mid)
    {
        int temp = 0;
        int no = 1;
        for (int i = 0; i < N; i++)
        {
            temp += arr[i];
            if (temp > mid)
            {
                temp = arr[i];
                no++;
            }
            if (no > K)
                return false;
        }
        return true;
    }
    int splitArray(int arr[], int N, int K)
    {
        // code here
        int low = INT_MIN;
        int high = 0;
        for (int i = 0; i < N; i++)
        {
            low = max(low, arr[i]);
            high += arr[i];
        }
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (isFeasible(arr, N, K, mid))
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};