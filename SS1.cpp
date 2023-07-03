#include <bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/subset-sums2234/1
class Solution
{
public:
void SubSum(int ind,int sum,vector<int>&arr,vector<int>&ds){
    if(ind==arr.size()){
        ds.push_back(sum);
        return;
    }
    
    SubSum(ind+1,sum+arr[ind],arr,ds);
    SubSum(ind+1,sum,arr,ds);
}
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ds;
        SubSum(0,0,arr,ds);
        sort(ds.begin(),ds.end());
        return ds;
    }
};