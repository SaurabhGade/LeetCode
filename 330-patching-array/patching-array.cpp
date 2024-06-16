class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        unsigned long i = 0 , reach = 0 , ans = 0;
        while(reach < n){
            if(i < nums.size() && nums[i] <= reach + 1){
                reach += nums[i];
                i++;
            }
            else{
                ans += 1;
                reach += reach+1;
            }
        }
        return ans;
    }
};