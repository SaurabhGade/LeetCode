class Solution {
public:
    // itrative solution
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
    // recursive solution
    void powerSetRec(vector<int> nums, vector<int> output, int i, vector<vector<int>> &ans){
        if(i >= nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude 
        powerSetRec(nums, output, i+1, ans);
        //include
        output.push_back(nums[i]);
        powerSetRec(nums, output, i+1, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        return powerSet(nums); //RUNTIME 0MS BEATS 100% RUNTIME AND 75% MEMORY.

        /* SLOW RUNTION = 6MS
        vector<vector<int>> ans;
        powerSetRec(nums, {}, 0, ans);
        return ans;
        */
    }
};