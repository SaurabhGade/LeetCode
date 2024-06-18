class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int min = prices[0];
        int ans = 0;
        for(int i = 1 ; i < prices.size() ; i++){
            int temp = prices[i];
            if(min > temp)
                min = temp;
            int curr = temp-min;
            if(ans < curr)
                ans = curr;
        }
        return ans;
    }
};