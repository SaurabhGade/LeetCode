class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMin = INT_MAX;
        int profit = 0;
        int n = prices.size();
        for(int i = 0; i < n; i++){
            if(currMin > prices[i])
                currMin = prices[i];
            profit = max(profit, prices[i] - currMin);
        }
        return profit;
    }
};