class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int min = prices[0];
        int ans = 0;
        for(int i = 1 ; i < prices.size() ; i++){
            if(min > prices[i])
                min = prices[i];
            int curr = prices[i]-min;
            if(ans < curr)
                ans = curr;
        }
        return ans;
    }
};