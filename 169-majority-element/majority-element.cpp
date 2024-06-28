class Solution {
public:
    int majorityElement(vector<int>& nums) {
        pair<int , int> p = {nums[0] , 1};
        int n = nums.size();
        for(int i = 1 ; i < n ; i++){
            if(p.second == 0){
                p.first = nums[i];
                p.second = 1;
            }
            else{
                if(p.first == nums[i])
                    p.second++;
                else
                    p.second--;
            }
        }
        return p.first;
    }
};