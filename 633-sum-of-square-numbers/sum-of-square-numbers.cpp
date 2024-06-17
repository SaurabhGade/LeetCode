class Solution {
public:
    bool judgeSquareSum(int c) {
      long i = 0;
      long j = int(sqrt(c));
      while(i <= j){
        long k = i*i + j*j;
        if(k == c){
            return true;
        }
        else if(k < c){
            i++;
        }else{
            j--;
        }
      }
      return false;
    }
};