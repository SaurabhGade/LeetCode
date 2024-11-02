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
    void lvorder(TreeNode *root, vector<int> &vec, int lv){
        if(lv < 0 || root == NULL) return;
        if(lv) lvorder(root->left, vec, lv-1);
        if(lv == 0) vec.push_back(root->val);
        if(lv) lvorder(root->right, vec, lv-1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int i = 0;
        while(true){
            vector<int> temp;
            lvorder(root, temp, i);
            if(temp.empty()) break;
            ans.push_back(temp);
            i++;
        }
        return ans;
    }
};