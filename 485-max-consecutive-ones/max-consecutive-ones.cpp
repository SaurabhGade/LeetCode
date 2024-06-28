class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int n = nums.size();
        int curr = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0)
                curr = 0;
            curr += nums[i];
            max = (curr > max)?curr:max;
        }
        return max;
    }
};