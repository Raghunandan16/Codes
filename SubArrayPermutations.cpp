#include <bits/stdc++.h>
using namespace std;
void PrintPermutation(vector<int> &arr, vector<int> &ds, map<int, int> &mpp)
{   
    if(ds.size()==arr.size()){
        for (int i = 0; i < ds.size(); i++)
        {
            cout<<ds[i]<<" ";
        }
        cout<<"\n";
        return ;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (mpp[arr[i]] == 0)
        {
            ds.push_back(arr[i]);
            mpp[arr[i]] = 1;
            PrintPermutation(arr,ds,mpp);
            mpp[ds[ds.size()-1]]=0;
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
    PrintPermutation(arr, ds, mpp);
}