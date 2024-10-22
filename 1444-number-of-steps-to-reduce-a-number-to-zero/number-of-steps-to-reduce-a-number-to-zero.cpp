class Solution {
public:
    int ans = 0;
    int numberOfSteps(int n) {
        if(n > 0){
        ans += 1;
        if(n % 2 == 0) numberOfSteps(n/2);
        else numberOfSteps(n-1);
        }
        return ans;
    }
};