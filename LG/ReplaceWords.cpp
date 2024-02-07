class Solution
{
public:
    string replaceWords(vector<string> &dictionary, string sentence)
    {
        istringstream ss(sentence);
        unordered_map<string, int> mp;
        for (auto str : dictionary)
        {
            mp[str]++;
        }
        string w, ans = "";
        while (ss >> w)
        {
            bool flag = false;
            string temp = "";
            for (auto ch : w)
            {
                temp += ch;
                if (mp.find(temp) != mp.end())
                {
                    ans += temp + " ";
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                ans += w;
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
    }
};