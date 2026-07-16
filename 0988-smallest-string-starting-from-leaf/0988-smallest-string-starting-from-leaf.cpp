class Solution {
public:
    string ans = "~";

    void preOrder(TreeNode* node, string str) {

        if (node == NULL)
            return;

        str += char(node->val + 'a');

        if (node->left == NULL && node->right == NULL) {

            reverse(str.begin(), str.end());

            if (str < ans)
                ans = str;

            return;
        }

        preOrder(node->left, str);
        preOrder(node->right, str);
    }

    string smallestFromLeaf(TreeNode* root) {

        preOrder(root, "");

        return ans;
    }
};