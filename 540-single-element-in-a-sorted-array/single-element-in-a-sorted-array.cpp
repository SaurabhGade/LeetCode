class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //fuck*ing fu*k*ss solution....
        int n = nums.size();
        int i = 0 , j = nums.size()-1;
        int mid;
        while(i <= j){
            mid = (i+j)/2;
            if(i == j)
                return nums[mid];
            if(mid == 0 && nums[mid] != nums[mid+1])
                return nums[mid];
            else if(mid == n-1 && nums[mid] != nums[mid-1])
                return nums[mid];
            else
                if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
                    return nums[mid];
            
            // if(i == j)
            //     return nums[mid];
            // if(i > 0 && nums[i] != nums[i+1] && nums[i] != nums[i-1])
            //     return nums[i];
            // if(i < n-1 && nums[j] != nums[j+1] && nums[j] != nums[j-1])
            //     return nums[j];
            if(mid % 2 == 0){
                if(mid >= n-1)
                    return nums[mid];
                else if(nums[mid] == nums[mid+1])
                    i = mid+1;
                else
                    j = mid-1;
            }
            else{
                if(mid <= 0)
                    return nums[mid];
                else if(nums[mid] == nums[mid-1])
                    i = mid+1;
                else
                    j = mid-1;
            }
        }
        return nums[mid];
    }
};