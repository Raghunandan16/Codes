#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int prev = 0;
    for (int i = 2; i < n; i++)
    {
        if (vec[i - 1] < vec[prev])
        {
            while (i<n-1 && (vec[i] == vec[i - 1]))
            {
                i++;
            }
            if(vec[i-1]<vec[i]){
                flag=false;
                break;
            }
            else prev=i-1;
        }
        else prev++;
    }
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}