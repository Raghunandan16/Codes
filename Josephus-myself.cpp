#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        vec[i] = i;
    }
    int j = k-1;
    while (vec.size() != 1)
    {
        if (vec.size()-1 >= j)
        {
            vec.erase(vec.begin() + j);
            j+=k-1;
        }
        else{
            j=j%vec.size();
            vec.erase(vec.begin()+j);
            j+=k-1;
        }
    }
    cout<<vec[0];
}