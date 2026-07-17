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
int ans = INT_MIN;
 int max_Sum(TreeNode* root){
  if (root == NULL)
            return 0;
            int leftMax=max(0,max_Sum(root->left));
            int rightMax=max(0,max_Sum(root->right));

            ans=max(leftMax+rightMax+root->val,ans);
            return max(leftMax,rightMax)+root->val;
}
    int maxPathSum(TreeNode* root) {
         max_Sum(root);
        return ans;
        
    }
};