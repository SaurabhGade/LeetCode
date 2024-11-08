class Solution {
public:
    vector<vector<int>> powerSet(vector<int> &nums){
        vector<vector<int>> ans = {{}};
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int ele = nums[i];
            int s = ans.size();
            for(int j = 0; j < s; j++){
                vector<int> t = ans[j];
                t.push_back(ele);
                ans.push_back(t);
            }
        }
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        return powerSet(nums);
    }
};