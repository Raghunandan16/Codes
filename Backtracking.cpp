// print permutations of int array such that no 2 consecutive integers are even 
#include <bits/stdc++.h>
using namespace std;
void perm(vector<int> &arr, vector<int> &ds, map<int, int> &mpp)
{
    if (ds.size() == arr.size())
    {
        for (int i = 0; i <arr.size(); i++)
        {
            cout << ds[i] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (mpp[arr[i]] == 0)
        {
            if (ds.size() != 0)
            {
                if (arr[i] % 2 == 0 && ds[ds.size() - 1] % 2 == 0)
                {
                    continue;
                }
            }

            ds.push_back(arr[i]);
            mpp[arr[i]] = 1;
            perm(arr, ds, mpp);
            mpp[ds[ds.size() - 1]] = 0;
            ds.pop_back();
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ds;
    map<int, int> mpp;
    perm(arr, ds, mpp);
}
