class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        for(int i = 1 ; i < n; i++){
            if(flag){
                if(nums[i] > nums[0] || nums[i] < nums[i-1])
                    return false;
            }else{
                if(nums[i-1] > nums[i]){
                    flag = true;
                    if(nums[i] > nums[0])
                        return false;
                }
            }
        }
        return true;
    }
};