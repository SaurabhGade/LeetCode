class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        int mid;
        while (i <= j) {
            mid = (i + j) / 2;
            if(nums[mid] == target)
                return true;
            while (i < j && nums[mid] == nums[i] && nums[mid] == nums[j] ){
                i++;
                j--;
            }
            if (nums[i] <= nums[mid]) {
                if (nums[i] <= target && target < nums[mid])
                    j = mid - 1;
                else
                    i = mid + 1;
            } else {
                if (nums[j] >= target && target > nums[mid])
                    i = mid + 1;
                else
                    j = mid - 1;
            }
        }
        return false;
    }
};