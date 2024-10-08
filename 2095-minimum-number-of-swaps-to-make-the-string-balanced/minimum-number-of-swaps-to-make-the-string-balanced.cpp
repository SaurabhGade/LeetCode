class Solution {
public:
    int minSwaps(string s) {
        auto close = 0;
        auto maxi  = 0;
        for(auto c: s){
            close += (c == ']')? 1: -1;
            maxi = max(maxi, close);
        }
        return (maxi+1)/2;
    }
};