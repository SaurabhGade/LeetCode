class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans = {{}};
        for(int i = 0; i < n; i++){
            int ele = nums[i];
            int size = ans.size();
            vector<int> vec;
            for(int j = 0; j < size; j++){
                vec = ans[j];
                vec.push_back(ele);
                ans.push_back(vec);
            }
        }
        return ans;
    }
};