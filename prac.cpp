#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int arr[4] = {1, 3, 2, 4};
    vector<long long> vec(n, -1);
    stack<long long> st;
    st.push(0);
    int i = 1;
    while (i < n)
    {
        if (arr[i] > arr[st.top()])
        {
            while ((!st.empty() || arr[st.top()]) < arr[i])
            {
                long long temp = st.top();
                vec[temp] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        else
        {
            st.push(i);
        }
        i++;
    }
    for(auto it:vec){}
}