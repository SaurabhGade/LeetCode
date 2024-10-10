class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        int hash[n];
        int ans = 0;
        int max = INT_MIN;
        for(int i = n-1; i >= 0; i--){
            if(nums[i] > max){
                max = nums[i];
            }
            hash[i] = max;
        }
        int  j = 1;
        for(int i = 0; i < n && j < n; i++){
            while(j < n && nums[i] <= hash[j]){
                ans = (ans < j-i)? j-i: ans;
                j++;
            }
        }
        return ans;
        // 6, 0, 8, 2, 1, 5
        // 8, 8, 8, 5, 5, 5
    }
};