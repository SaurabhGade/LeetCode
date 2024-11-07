class Solution {
public:
    bool is_bit_set(int k , int i){
        assert(i <= 31);
        unsigned int t = 1;
        t <<= i;
        return k&t;
    }
    #define IS_BIT_SET(k, i) (assert((i) <= 31), ((k) & (1U << i)) != 0)
    int largestCombination(vector<int>& c) {
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