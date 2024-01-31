// https://leetcode.com/problems/balanced-binary-tree/description/
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
class Solution
{
public:
    int balanced(Node *node)
    {
        if (node == NULL)
            return 0;
        int left = balanced(node->left);
        if (left == -1)
            return -1;
        int right = balanced(node->right);
        if (right == -1)
            return -1;
        if (abs(right - left) > 1)
            return -1;
        return 1 + max(left, right);
    }
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return balanced(root) != -1;
    }
};