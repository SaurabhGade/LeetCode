class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        mp[0] = 1;
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
            int remove = sum-k;
            cnt += mp[remove];
            mp[sum]+=1;
        }
        return cnt;
        // int ans = 0;         ***TLE
        // int n = nums.size();
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = 0 ; j < n ;j++){
        //         int curr= 0; bool flag = false;
        //         for(int k = i ; k <= j ; k++){
        //             flag= true;
        //             curr += nums[k];
        //         }
        //         if(curr == goal && flag)
        //             ans++;
        //     }
        // }
        // return ans;
    }
};