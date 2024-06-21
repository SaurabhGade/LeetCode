class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        int lowerBound = nums[i] , upperBound = nums[j];
        int ans = INT_MAX;
        while(i <= j){
            int mid = (i+j)/2;
            if(ans > nums[mid])
                ans = nums[mid];
            if(upperBound <= nums[mid] && upperBound <= nums[mid])
                i = mid+1;
            else
                j = mid-1;
        }
        return ans;
    }
};