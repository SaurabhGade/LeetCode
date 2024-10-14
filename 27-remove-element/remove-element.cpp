class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> t;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] != val)
                t.push_back(nums[i]);
        for(int i = 0; i < t.size(); i++)
            nums[i] = t[i];
        return t.size();
        
    }
};