class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        int sum = 0;
        int cnt = 0;
        int n = nums.size();
        mp[0] = 1;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
            int remove = sum-k;
            cnt += mp[remove];
            mp[sum]++;
        }
        return cnt;
    }
};