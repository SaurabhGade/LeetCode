class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int n = nums.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i]; 
            if(sum > ans)
                ans = sum;
            if(sum < 0) sum = 0;
        }
        return ans;
        // int ans = INT_MIN;
        // int n = nums.size();    
        // for(int i = 0 ; i < n ; i++){
        //     int curr = 0;
        //     for(int j = i; j < n ; j++){
        //         curr += nums[j];
        //         ans = max(ans , curr);
        //     }
        // }
        // return ans;
    }
};