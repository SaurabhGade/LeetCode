class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0 , j = nums.size()-1;
        int mid;
        while(i <= j){
            mid = (i+j)/2;
            if(nums[mid] == target) return mid;
            if(nums[i] <= nums[mid]){ //first half is sorted.
                if(nums[i] <= target && target < nums[mid])
                    j = mid-1;
                else i = mid+1;
            }else{              //second half is sorted.
                if(nums[j] >= target && target > nums[mid])
                    i = mid+1;
                else j = mid-1;
            }
        }
        return -1;      //element not found.
    }
};