class Solution {
public:
    bool isPrime(int k){
        int n = sqrt(k);
        for(int i = 2; i <= n; i++)
            if(k % i == 0) return false;
        return true;
    }
    bool isSorted(vector<int> &vec){
        int min = INT_MIN;
        for(int &i: vec)
            if(min >= i) return false;
            else min = i;
        return true;
    }
    bool primeSubOperation(vector<int>& nums) {
        int min = INT_MIN;
        int n   = nums.size();
        for(int i = 0; i < n; i++){
            int k = nums[i]-1;
           // if(nums[i] <= min) return false;
            while(k > 1){
                if(isPrime(k) && nums[i]-k > min){
                    nums[i]-=k;
                     break;
                }
                k--;
            }
            min = nums[i];
        }
        return isSorted(nums);
    }
};