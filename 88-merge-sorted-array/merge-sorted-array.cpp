class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> t;
        for(int i = 0; i < m; i++)
            t.push_back(nums1[i]);
        int i = 0, j = 0;
        int z = 0;
        while(i < m && j < n){
            if(t[i] < nums2[j]){
                nums1[z] = t[i];
                i++;
            }else{
               nums1[z] = nums2[j];
                j++;
            }
            z++;
        }
        while(i < m){
            nums1[z] = t[i]; z++;
            i++;
        }
        while(j < n){
            nums1[z] = nums2[j]; z++;
            j++;
        }
    }
};