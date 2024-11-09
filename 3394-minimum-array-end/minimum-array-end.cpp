class Solution {
    /*
    n = 3, x = 4
    start = 4(100)
    4 + 1 = 5(101) | (100) = 5;
    5 + 1 = 6(110) | (100) = 6
    */
public:
    long long minEnd(int n, int x) {
        long long cnt = x;
        long long i = 1;
        while(i < n){
            cnt += 1;
            cnt |= x;
            i++;
        }
        return cnt;
    }
    /*
        n = 2, x = 7 , i = 0
        cnt = 7
        7+1 | 7 = 
    */
};
