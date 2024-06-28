class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0 , j = 0;
        int n = nums.size();
        while(i < n && j < n){
            while(j < n){
                if(nums[j] != 0)
                    break;
                j++;
            }
            if(nums[i] == 0 && j < n){
                nums[i] = nums[j];
                nums[j] = 0;
            } if(i == j) j++;
            i++;
        }
    }
};