#include <bits/stdc++.h>
using namespace std;
void goodSubstrings()
{
    long long int mod = 1000000007;
    string s, goodBad;
    cin >> s >> goodBad;
    int n = s.length();
    int k;
    cin >> k;
    set<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        string sub = "";
        int hash = 0;
        int pr = 1;
        int hash1 = 0;
        int pr1 = 1;
        int countBad = 0;
        for (int j = i; j < n; j++)
        {
            sub += s[j];
            if (goodBad[s[j] - 'a'] == '0')
                countBad++;
            if (countBad > k)
                break;
            hash = (hash + (s[j] - 'a' + 1) * pr) % mod;
            hash1 = (hash1 + (s[j] - 'a' + 1) * pr1) % mod;
            pr = (pr * 31) % mod;
            pr1 = (pr1 * 37) % mod;
            st.insert(make_pair(hash, hash1));
        }
    }
    cout << st.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    goodSubstrings();
}