class Solution {
public:
    int setBitCnt(int n){
        int k = pow(2, 8);
        int cnt = 0;
        while(k > 0){
            cnt += (k & n)? 1: 0;
            k >>= 1;
        }
        return cnt;
    }
    void swap(int *a, int *b){
        int t = *a;
        *a = *b;
        *b = t;
    }
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = n-1; i >= 0; i--){
            for(int j = 0; j < i; j++){
                if(nums[j] > nums[j+1] && 
                    setBitCnt(nums[j]) == setBitCnt(nums[j+1])
                    ){
                        swap(&nums[j], &nums[j+1]);
                }
            }
        }
        return is_sorted(nums.begin(), nums.end());
    }
};