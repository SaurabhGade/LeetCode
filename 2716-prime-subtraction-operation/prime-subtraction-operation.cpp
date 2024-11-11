class Solution {
public:
    unordered_map<int, bool> mp;
    bool isSorted(vector<int> & nums){
        int min = INT_MIN;
        for(int &i: nums){
            if(min >= i)
                return false;
            min = i;
        }
        return true;
    }
    bool isPrime(int k){
        if(mp.find(k) != mp.end()) return mp[k];
        if(k == 1) return false;
        int n = sqrt(k);
        for(int i = 2; i <= n; i++){
            if(k % i == 0) {
                mp[k] = false;
                return false;
            }
        }
        mp[k] = true;
        return true;
    }
    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();
        int min = INT_MIN;
        for(int i = 0; i < n; i++){
            int k = nums[i]-1;
            while(k > 1){
                if(isPrime(k) && nums[i]-k > min){
                    nums[i] -= k;
                    break;
                }
                k--;
            }
            min = nums[i];
            //if(isSorted(nums)) return true;
        }
        return isSorted(nums);
    }
};