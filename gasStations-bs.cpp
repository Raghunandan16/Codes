// https://practice.geeksforgeeks.org/problems/minimize-max-distance-to-gas-station/1
// works fine for each platform
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPossible(vector<int> &stations, double mid, int k)
    {
        int count = 0;
        int n = stations.size();
        for (int i = 1; i < n; i++)
        {
            int num = (stations[i] - stations[i - 1]) / mid;
            if (num * mid == stations[i] - stations[i - 1])
                num--;
            count += num;
            if (count > k)
                return false;
        }
        return true;
    }
    double findSmallestMaxDist(vector<int> &stations, int k)
    {
        // Code here
        int n = stations.size();
        double low = 0;
        double high = 0;
        for (int i = 1; i < n; i++)
        {
            high = max(high, (double)(stations[i] - stations[i - 1]));
        }
        while (high - low > 1e-6)
        {
            double mid = low + (high - low) / 2.0;
            if (isPossible(stations, mid, k))
                high = mid;
            else
                low = mid;
        }
        return high + 0.000001;
    }
};

// } Driver Code Ends

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k) << endl;
    }
    return 0;
}
// } Driver Code Ends