class Solution {
public:
    int minGroups(vector<vector<int>>& it) {
        int n = it.size();
        int start[n];
        int end[n];
        for(int i = 0 ; i < n; i++){
            start[i] = it[i][0];
            end[i] = it[i][1];
        }
        sort(start , start+n);
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
    }
};