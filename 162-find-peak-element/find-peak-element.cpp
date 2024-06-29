class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1)
            return 0;
        int max = INT_MIN;
        int ans = -1;
        for(int i = 0 ; i < nums.size() ; i++)
            if(max < nums[i]){
                max = nums[i];
                ans = i;
            }
        return ans;
    }
};