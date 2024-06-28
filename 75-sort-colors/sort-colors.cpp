class Solution {
public:
    void sortColors(vector<int>& nums) {
    //  sort(nums.begin() , nums.end());
        int arr[3];
        arr[0] = arr[1] = arr[2] = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            arr[nums[i]]++;
        }
        int j = 0;
       for(int i = 0 ; i < 3 ; i++){
            while(arr[i] > 0){
                nums[j] = i;
                arr[i]--;
                j++;
            }
       }
    }
};