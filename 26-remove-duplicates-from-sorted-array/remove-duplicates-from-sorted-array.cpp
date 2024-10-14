class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int prv = INT_MIN;
        int k = 0;
        for(int i = 0; i < n; i++){
            if(prv == nums[i]){
                int j = i;
                k++;
                while(j < n-1){
                    nums[j] = nums[j+1];
                    j++;
                }
                n--;
            }
            prv = nums[i];  
            if(i > 0 && nums[i] == nums[i-1]) i--;
        } 
        return nums.size()-k;
    }
};