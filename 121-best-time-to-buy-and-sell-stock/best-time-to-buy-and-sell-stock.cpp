class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int n = prices.size();
        int maxProfit = 0;
        for(int i = 1 ; i < n ; i++){
          maxProfit = (maxProfit < prices[i]-min)?prices[i]-min:maxProfit;
          min = (min > prices[i])?prices[i]:min;
        }
        return maxProfit;
    }
};