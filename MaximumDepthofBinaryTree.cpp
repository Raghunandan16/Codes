// https://leetcode.com/problems/maximum-depth-of-binary-tree/
#include<bits/stdc++.h>
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
class Solution {
private:
   int depth(TreeNode* node){
       if(node==NULL)return 0;
       int left = depth(node->left);
       int right = depth(node->right);
       return 1+max(left,right);
   }
public:
    int maxDepth(TreeNode* root) {
        return depth(root);
    }
};