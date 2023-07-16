// https: // practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-111/problems
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    static bool comp(const string &a, const string &b)
    {
        if (a.size() != b.size())
            return a.size() > b.size();
        return a < b;
    }
    string longestString(vector<string> &words)
    {
        // code here
        int n = words.size();
        unordered_map<string, int> mpp;
        sort(words.begin(), words.end(), comp);
        for (auto it : words)
            mpp[it]++;
        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            string temp = "";
            for (int j = 0; j < words[i].size(); j++)
            {
                temp += words[i][j];
                if (mpp.find(temp) == mpp.end())
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                return temp;
        }
        return "";
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
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends