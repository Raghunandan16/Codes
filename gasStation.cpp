// https://practice.geeksforgeeks.org/problems/minimize-max-distance-to-gas-station/1
// gives TLE On gfg but will work fine on other platforms
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    double findSmallestMaxDist(vector<int> &stations, int K)
    {
        // Code here
        int n = stations.size();
        priority_queue<pair<double, int>> pq;
        for (int i = 0; i < n - 1; i++)
        {
            pq.push({(double)(stations[i + 1] - stations[i]), i});
        }
        vector<int> nums(n - 1);
        for (int i = 0; i < K; i++)
        {
            int secIndex = pq.top().second;
            pq.pop();
            nums[secIndex]++;
            double secLen = stations[secIndex + 1] - stations[secIndex];
            secLen = secLen / (double)(nums[secIndex] + 1);
            pq.push({secLen, secIndex});
        }
        return pq.top().first + 0.000001;
    }
};

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