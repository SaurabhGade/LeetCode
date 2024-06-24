class Solution {
public:
    int fib(int n) {
        int psum = 0;
        int sum = 1;
        if(n == 0) return psum;
        if(n == 1) return sum;
        int next = 0;
        for(int i = 2; i <= n  ; i++){
            next = psum + sum;
            psum = sum;
            sum = next;
        }
        return next;
    }
};