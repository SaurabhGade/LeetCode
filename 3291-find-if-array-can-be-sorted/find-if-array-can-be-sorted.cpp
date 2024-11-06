class Solution {
public:
    int setBitCnt(int n){
        int k = pow(2, 8);
        int cnt = 0;
        while(k){
            cnt += (k & n)? 1: 0;
            k >>= 1;
        }
        return cnt;
    }
    bool canSortArray(vector<int>& nums) {
        int currMin , currMax, priMax;
        currMin = currMax = nums[0];
        priMax = INT_MIN;
        for(int &i: nums){
            if(setBitCnt(i) == setBitCnt(currMin)){
                currMin = min(currMin, i);
                currMax = max(currMax, i);
            }else{
                if(currMin < priMax) return false;
                priMax = currMax;
                currMin = currMax = i;
            }
        }
        return !(currMin < priMax);
    }
};