class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        // for(int i = 0 ; i < n ; i++)
        //     ans[i] = 0;
        int j = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > 0){
                ans[j] = nums[i];
                j+=2;
            }
        }
         j = 1;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] < 0){
                ans[j] = nums[i];
                j += 2;
            }
        }
        return ans;
    }
};