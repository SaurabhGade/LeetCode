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
    bool isSame(TreeNode *p, TreeNode *q){
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        return isSame(p->left, q->left) && isSame(p->right , q->right);
    }
    bool x = true, y = true;
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;
        if(root == NULL || subRoot == NULL) return false;
        if(root->val == subRoot->val){
            x =  isSame(root->left, subRoot->left);
            y =  isSame(root->right, subRoot->right);
            if(x && y) return true;
        }
        return isSubtree(root->left, subRoot) || 
               isSubtree(root->right, subRoot);
    }
};