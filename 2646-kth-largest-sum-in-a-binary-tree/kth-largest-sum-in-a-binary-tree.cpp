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
    map<int , long long> mp;
    void lvl_order_traversal(TreeNode *root, int lv){
        if(root == NULL)
            return;
        lvl_order_traversal(root->left, lv+1);
        mp[lv] += root->val;
        lvl_order_traversal(root->right, lv+1);
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
      lvl_order_traversal(root, 0);
        priority_queue<long long> pq;
        for(auto i : mp){
          pq.push(i.second);
        }
        if(k > pq.size()) return -1;
        while(k > 1 && !pq.empty()){
            pq.pop();
            k--;
        }
        return pq.top();   
    }
};