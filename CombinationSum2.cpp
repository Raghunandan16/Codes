class Solution {
public:
void Uniquesum(int ind, int target,vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
        }
    for (int i = ind; i < arr.size(); i++)
    {
        if(arr[i]==arr[i-1] && i>ind) {
            continue;
        }
        if(arr[i]>target){
            break;
        }
        ds.push_back(arr[i]);
        Uniquesum(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        Uniquesum(0,target,candidates,ans,ds);
    }
};