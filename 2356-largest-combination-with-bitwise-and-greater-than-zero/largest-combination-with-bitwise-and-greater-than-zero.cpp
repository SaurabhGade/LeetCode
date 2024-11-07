class Solution {
public:
    #define IS_BIT_SET(k, i) (((k) & (1U << i)) != 0)
    int largestCombination(vector<int>& c) {
        int n = c.size();
        int ans = 0;
        for(int i = 0; i < 24; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                 if(IS_BIT_SET(c[j], i)) cnt++;
            }
            if(cnt > ans) ans = cnt;
        }
        return ans;
    }
};