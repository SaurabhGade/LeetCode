class Solution {
public:
    bool check(vector<int>& arr) {
        int n = arr.size();
        int prv = arr[0];
        bool flag = true;
        for(int i = 1; i < n ;i++){
            if(!flag && (prv > arr[i] || arr[i] > arr[0])) return false;
            if(prv > arr[i] && flag) flag = false;
            prv = arr[i];
        }
        if(!flag && arr[n-1] > arr[0]) return false;
        return true;
    }
};