class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> st;
        int ans = 0;
        int currSum = 0;
        int x = 1;
        for(int &i: banned)
            st.insert(i);
        while(x <= n && currSum <= maxSum){
            if(st.find(x) == st.end()){
                ans++;
                currSum += x;
            }
            x++;
        }
        if(currSum > maxSum) return ans-1;
        return ans;
    }
};