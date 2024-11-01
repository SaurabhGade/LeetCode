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
    int height(TreeNode *root){
        if(root == NULL) return 0;
        int l = 1 + height(root->left);
        int h = 1 + height(root->right);
        return max(l, h);
    }
    int mx = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return mx;
        int l = height(root->left);
        int h = height(root->right);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        mx = max(mx, l+h);
        return mx;
    }
};