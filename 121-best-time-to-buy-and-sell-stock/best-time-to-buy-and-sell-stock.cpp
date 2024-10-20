class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMin = INT_MAX;
        int profit = 0;
        for(int i = 0; i < prices.size(); i++){
            if(currMin > prices[i])
                currMin = prices[i];
            profit = max(profit, prices[i] - currMin);
        }
        return profit;
    }
};