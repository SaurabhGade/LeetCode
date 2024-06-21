class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int m) {
        int ans = 0 , curr = 0 , inc = 0;
        int n = grumpy.size();
        for(int i = 0 ; i < n ; i++){
            if(grumpy[i] != 1){
                ans += customers[i];
                customers[i] = 0;
            }
            if(i >= m){
                 inc = (curr > inc)?curr:inc;
                if(grumpy[i-m] != 0){
                    curr -= customers[i-m];
                }  
            }
            curr += customers[i];
        }
        inc = (curr > inc)? curr : inc;
        return ans+inc;
        
    }
};