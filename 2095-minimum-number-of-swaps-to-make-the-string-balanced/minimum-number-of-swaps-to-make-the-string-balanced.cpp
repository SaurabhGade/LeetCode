class Solution {
public:
    auto minSwaps(auto s) {
        auto close = 0;
        auto maxi   = 0;
        for(auto c: s){
            if(c == ']')
                close++;
            else close --;
            maxi = max(maxi, close);
        }
        return (maxi+1)/2;
    }
};