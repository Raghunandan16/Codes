#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    int count1 = 0;
    int count2 = 0;
    int temp = 0;
    int flag = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
                temp += 2;
                flag = 1;
            }
            else
            {
                if (flag == 1)
                {
                    count2++;
                    count1 = max(temp, count1);
                    temp = 0;
                }
                else
                    flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        count1 = max(count1, tmep)
    }
}