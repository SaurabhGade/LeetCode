class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0 , j = nums.size()-1;
        int mid; 
        int ans = INT_MAX;
        while(i <= j){
            mid = (i+j)/2;
            if(nums[mid] < ans)
                ans = nums[mid];
            if(nums[mid] >  nums[j])
                i = mid+1;
            else j = mid-1;
        }
        return ans;
    }
};