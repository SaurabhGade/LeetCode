class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int k = 0 ; k< matrix.size() ; k++){
            vector<int> temp = matrix[k];
            int i = 0 , j = temp.size()-1;
            while(i <= j){
                int mid = (i+j)/2;
                if(temp[mid] == target)
                    return true;
                else if(temp[mid] > target){
                    j = mid-1;
                }
                else
                    i = mid+1;
            }
        }
        return false;
    }
};