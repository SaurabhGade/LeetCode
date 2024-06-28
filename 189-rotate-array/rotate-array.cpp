class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> aux;
        int n = nums.size();
        if(k > n) k = k % n;    //k should not be the more than the size of vector.
        int m = n-k;
        for(m ; m < n ; m++)
            aux.push_back(nums[m]);
        for(int i = 0 ; i  < m ; i++)
            aux.push_back(nums[i]);
        for(int i = 0 ; i < n ;i++)
            nums[i] = aux[i];
        
    }
};