class Solution {
public:
    int largestCombination(vector<int>& c) {
        #define IS_BIT_SET(k, i) (assert((i) <= 31), ((k) & (1U << i)) != 0)
        int n = c.size();
        int ans = 0;
        for(int i = 0; i < 24; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                cnt += IS_BIT_SET(c[j], i)? 1: 0;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};