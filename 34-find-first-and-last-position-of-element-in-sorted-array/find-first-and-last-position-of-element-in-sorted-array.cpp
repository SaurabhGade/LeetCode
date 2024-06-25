class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        int i = 0 , j = nums.size()-1;
        int mid; bool flag = true;
        while(i <= j && flag){
            mid = (i+j)/2;
            if(nums[mid] > target)
                j = mid-1;
            else if(nums[mid] < target)
                i = mid+1;
            else{
                flag = false;
                break;
            }
        }
        if(!flag){ 
            i = j = mid;
            while(i >= 0 && nums[i] == target)
                i--;
            if(i < 0) ans[0] = 0; else ans[0] = i+1;
            while(j < nums.size() && nums[j] == target)
                j++;
            if(j > nums.size()) ans[1] = nums.size()-1; else ans[1] = j-1;
        }
        return ans;
    }
};