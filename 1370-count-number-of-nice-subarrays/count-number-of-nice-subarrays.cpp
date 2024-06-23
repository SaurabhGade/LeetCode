class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        mp[0] = 1;
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] %2 != 0) sum += 1;
            else sum += 0;
            int remove = sum-k;
            cnt += mp[remove];
            mp[sum]+= 1;
        }
        return cnt;
        // int ans = 0;     time ~ O(n^2) still TLE
        // int n = nums.size();
      
        // for(int i = 0 ; i < n ; i++){
        //     int cnt  = 0;
        //     for(int j = i ; j < n ; j++){
        //         if(nums[j] %2 != 0)
        //             cnt++;
        //         if(cnt == k)
        //             ans++;
        //     }
        // }
        // return ans;
        // int ans = 0;         time ~ O(n^3);  TLE
        // int n = nums.size();
        // if(k > n)
        //     return ans;
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = 0 ; j < n ; j++){
        //         int m = k;
        //         for(int k = i ; k <= j ; k++){
        //             if(nums[k] % 2 != 0){
        //                 m--;
        //             }
        //         }
        //         if(m == 0)
        //             ans++;
        //     }
        // }
        // return ans;
    }
};