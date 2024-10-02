class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        if(x == 1) return 1;
        size_t l = 0, h = x/2;
        size_t ans;
        while(l <= h){
         ans = (l+h)/2;
         if(ans * ans > x)
              h = ans-1;
         else if(ans* ans < x)
              l = ans+1;
         else return ans;
         }
         if(ans * ans > x)
            return ans-1;
        return ans;

    }
};