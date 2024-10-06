class Solution {
public:
    bool canJump(vector<int>& arr) {
        int mxJump = 0;
        int n = arr.size();
        if(n <= 1) return true;
        for(int i = 0 ; i < n; i++){
            if(mxJump < i + arr[i])
                mxJump = i+arr[i];
            if(mxJump >= n-1) return true;
            if(mxJump == i && arr[i] == 0) break;
        }
        return false;
    }
};