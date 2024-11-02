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
    bool lft = true;
    bool rht = true;
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return lft && rht;
        int l = height(root->left);
        int h = height(root->right);
        if(abs(l-h) > 1) return false;
        lft =  isBalanced(root->left);
        rht =  isBalanced(root->right);
        return lft && rht;
    }
};