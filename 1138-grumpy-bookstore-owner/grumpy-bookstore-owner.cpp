class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int m) {
        int ans = 0;
        int n = grumpy.size();
        for(int i = 0 ; i < n ; i++){
            if(grumpy[i] != 1)
                ans += customers[i];
        }
        int inc = 0;
        for(int i = 0 ; i <= n-m ; i++){
            int curr = 0;
            for(int j = i ; j < i+m && j < n; j++){
                if(grumpy[j] != 0)
                    curr += customers[j];
            }
            if(curr > inc)
                inc = curr;
        }
        return ans+inc;
    }
};