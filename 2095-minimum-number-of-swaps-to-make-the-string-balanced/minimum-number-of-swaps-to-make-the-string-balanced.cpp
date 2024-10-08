class Solution {
public:
    int minSwaps(string s) {
        auto close = 0;
        auto max   = 0;
        for(auto c: s){
            if(c == ']')
                close++;
            else close --;
            max = (max < close)? close: max;
        }
        return (max+1)/2;
    }
};