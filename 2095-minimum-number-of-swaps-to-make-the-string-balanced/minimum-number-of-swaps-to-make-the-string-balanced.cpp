class Solution {
public:
    int minSwaps(string s) {
        int close = 0;
        int max   = 0;
        for(char c: s){
            if(c == ']')
                close++;
            else close --;
            max = (max < close)? close: max;
        }
        return (max+1)/2;
    }
};