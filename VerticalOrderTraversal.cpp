// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void traversal(TreeNode *node, int r, int c, map<int, vector<pair<int, int>>> &mpp)
    {
        if (node == NULL)
            return;
        mpp[c].push_back({r, node->val});
        traversal(node->left, r + 1, c - 1, mpp);
        traversal(node->right, r + 1, c + 1, mpp);
    }
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        if (root == NULL)
            return {};
        map<int, vector<pair<int, int>>> mpp;
        traversal(root, 0, 0, mpp);
        vector<vector<int>> ans;
        for (auto it : mpp)
        {
            sort(it.second.begin(), it.second.end());
            vector<int> temp;
            for (auto el : it.second)
            {
                temp.push_back(el.second);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};