class Solution {
public:
    int minGroups(vector<vector<int>>& in) {
        int n = in.size();
        int start[n], end[n];
        for(int i = 0; i < n; i++){
            start[i] = in[i][0];
            end[i] = in[i][1];
        }
        sort(start, start+n);
        sort(end, end+n);
        int i = 0, j = 0;
        int ans = 0;
        while(i < n){
            if(start[i] <= end[j])
                i++;
            else j++;
            ans = max(ans, i-j);
        }
        return ans;
        // 1 5 8 11
        // 3 5 6 13
    }
};