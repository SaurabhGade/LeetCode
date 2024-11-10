class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int ans = 0;
        int n = prices.size();
        for(int i = 0; i < n; i++){
            min = (prices[i] < min)? prices[i]: min;
            ans = max(ans, prices[i]-min);
        }
        return ans;
    }
};