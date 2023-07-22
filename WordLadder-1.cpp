// https://practice.geeksforgeeks.org/problems/word-ladder/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=word-ladder
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int wordLadderLength(string start, string target, vector<string> &arr)
    {
        // Code here
        unordered_set<string> st;
        for (auto it : arr)
            st.insert(it);
        queue<pair<string, int>> q;
        q.push({start, 1});
        while (!q.empty())
        {
            string word = q.front().first;
            int level = q.front().second;
            if (word == target)
                return level;
            q.pop();
            for (int i = 0; i < word.size(); i++)
            {
                char orig = word[i];
                for (char j = 'a'; j <= 'z'; j++)
                {
                    word[i] = j;
                    if (st.find(word) != st.end())
                    {
                        q.push({word, level + 1});
                        st.erase(word);
                    }
                }
                word[i] = orig;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<string> wordList(n);
        for (int i = 0; i < n; i++)
            cin >> wordList[i];
        string startWord, targetWord;
        cin >> startWord >> targetWord;
        Solution obj;
        int ans = obj.wordLadderLength(startWord, targetWord, wordList);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends