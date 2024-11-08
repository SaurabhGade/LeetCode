class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int mb) {
        vector<int> ans;
        int t = 0;
        int n = nums.size();
        for(int &i: nums)
            t ^= i;
        int s = (1U << mb)-1;
        for(int i = n-1; i >= 0; i--){
            ans.push_back(t^s);
            t ^= nums[i];
        }
        return ans;
    }
};