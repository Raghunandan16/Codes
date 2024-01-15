#include <bits/stdc++.h>
using namespace std;
int main()
{
    string inp = "2[a3[bc]]"; // abcbcbcabcbcbc
    stack<char> st;
    string ans = "";
    for (auto it : inp)
    {
        if (it != ']')
            st.push(it);
        else
        {
            string temp = ans; // bcbcbc
            while (st.top() != '[')
            {
                temp = st.top() + temp; // abcbcbc
                st.pop();
            }
            st.pop();                 // [
            int num = st.top() - '0'; // value to be multiplied
            st.pop();
            string s = temp;
            for (int i = 0; i < num - 1; i++)
            {
                temp += s;
            }
            ans = temp; // bcbcbc
        }
    }
    cout << ans;
}