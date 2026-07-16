class Solution {
public:
    vector<vector<int>> ans;

    void dfs(TreeNode* node, int targetSum, vector<int>& path) {
        if (node == NULL)
            return;

        path.push_back(node->val);

        
        if (node->left == NULL && node->right == NULL) {
            if (targetSum == node->val) {
                ans.push_back(path);
            }
        }

        dfs(node->left, targetSum - node->val, path);
        dfs(node->right, targetSum - node->val, path);

        
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        dfs(root, targetSum, path);
        return ans;
    }
};