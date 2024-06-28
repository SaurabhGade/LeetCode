class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(mp.find(target- nums[i]) != mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                break;
            }
            mp[nums[i]] = i;
        }
        return ans;
        // vector<int> ans;     O(n^2);
        // int n = nums.size();
        // for(int i = 0 ; i < n ;i++){
        //     for(int j = i+1 ; j < n ; j++){
        //         if(nums[i] + nums[j] == target){
        //             ans.push_back(i); ans.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return ans;
    }
};