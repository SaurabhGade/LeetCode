class Solution {
public:
    #define IS_BIT_SET(k, i) (k & (1U << (i)))
    vector<int> getMaximumXor(vector<int>& nums, int mb) {
        int n = nums.size();
        int arr[mb];
        vector<int> ans;
        memset(arr, 0, sizeof(arr));
        for(int i = 0; i < mb; i++){
            for(int j = 0; j < n; j++){
                arr[mb-i-1] += IS_BIT_SET(nums[j], i)? 1: 0;
            }
        }
        for(int i = n-1; i >= 0; i--){
            int queryI = 0;
            for(int j = mb-1; j >= 0; j--){
                if(arr[j] % 2 == 0){
                    queryI += pow(2, mb-j-1);
                } 
                arr[j] -= IS_BIT_SET(nums[i], mb-j-1)?1:0;
            }
            ans.push_back(queryI);
        }
        return ans;
    }
};
/*
    mb = 2
00
01
01
11
--
13
*/