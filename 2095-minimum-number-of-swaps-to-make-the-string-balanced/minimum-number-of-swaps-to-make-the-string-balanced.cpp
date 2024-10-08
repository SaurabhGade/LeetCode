class Solution {
public:
    int minSwaps(string s) {
        int close = 0;
        int maxi  = 0;
        for(char c: s){
            close += (c == ']')? 1: -1;
            maxi = max(maxi, close);
        }
        return (maxi+1)/2;
    }
};