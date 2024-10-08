class Solution {
public:
    int minSwaps(string s) {
        int close = 0;
        int max   = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ']')
                close++;
            else close --;
            max = (max < close)? close: max;
        }
        return (max+1)/2;
    }
};