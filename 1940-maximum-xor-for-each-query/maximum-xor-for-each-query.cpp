class Solution {
public:
    #define IS_BIT_SET(k, i) ((k) & 1U << (i))
    vector<int> getMaximumXor(vector<int>& nums, int mb) {
        int n = nums.size();
        int prifix[n];
        int k = 0;
        for(int i = 0; i < n; i++){
            k ^= nums[i];
            prifix[i] = k;
        }
        reverse(prifix, prifix+n);
        for(int i = 0; i < n; i++){
            int queryI = 0;
            for(int j = 0; j < mb; j++){
                queryI += IS_BIT_SET(prifix[i], j)?0: pow(2, j);
            }
            nums[i] = queryI;
        }
        return nums;
    }
};
// 0, 1, 0, 3
// 3, 0, 1, 0
//11, 00, 01, 00
