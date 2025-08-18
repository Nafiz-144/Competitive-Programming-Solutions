#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    // This is the public function called by the user.
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        inorderHelper(root, result);
        return result;
    }

private:
    // This is the recursive helper function.
    void inorderHelper(TreeNode *root, vector<int> &result)
    {
        // Base case: if the node is null, stop the recursion.
        if (root == nullptr)
        {
            return;
        }

        // 1. Traverse the left subtree.
        inorderHelper(root->left, result);

        // 2. Visit the current node.
        result.push_back(root->val);

        // 3. Traverse the right subtree.
        inorderHelper(root->right, result);
    }
};