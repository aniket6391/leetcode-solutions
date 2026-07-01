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
public:

    long second = LONG_MAX;
    int first;

    void dfs(TreeNode* root)
    {
        if(root == NULL)
            return;

        if(root->val > first && root->val < second)
            second = root->val;

        dfs(root->left);
        dfs(root->right);
    }

    int findSecondMinimumValue(TreeNode* root) {

        first = root->val;

        dfs(root);

        return second == LONG_MAX ? -1 : second;
    }
};