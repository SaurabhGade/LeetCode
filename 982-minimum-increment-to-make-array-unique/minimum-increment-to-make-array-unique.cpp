class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int pri = nums[0];
        int ans = 0;
        for(int i = 1 ; i < nums.size() ; i++){
            int t = nums[i];
            if(pri >= nums[i]){
                nums[i] += pri - nums[i] + 1;
            }
            ans+= nums[i] - t;
            pri = nums[i];
        }
        return ans;
    }
};