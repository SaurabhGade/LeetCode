class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int mb) {
        vector<int> ans;
        int n = nums.size();
        int t = 0;
        for(int &i: nums)
            t ^= i;
        int s = (1U << mb)-1;       //pow(2, mb)-1;
        for(int i = n-1; i >= 0; i--){
            ans.push_back(t ^ s);
            t ^= nums[i];
        }
        return ans;
    }
};
/*
 mb = 3
 010
 011
 100
 111

 010 ^ 111 = 101



*/