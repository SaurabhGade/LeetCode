class Solution {
public:
    bool is_bit_set(int k , int i){
        assert(i <= 31);
        unsigned int t = 1;
        t <<= i;
        return k&t;
    }
    int largestCombination(vector<int>& c) {
        int n = c.size();
        int ans = 0;
        for(int i = 0; i < 24; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                cnt += is_bit_set(c[j], i)? 1: 0;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};