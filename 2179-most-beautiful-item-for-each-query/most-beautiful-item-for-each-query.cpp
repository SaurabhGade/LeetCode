class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<pair<int, int>> it;
        vector<pair<int, int>> qu;
        int n = queries.size();
        for(vector<int> &i: items)
            it.push_back({i[0], i[1]});
        for(int i = 0; i < n; i++)
            qu.push_back({queries[i], i});
        sort(it.begin(), it.end());
        sort(qu.begin(), qu.end());
        int mx = 0;
        int j  = 0;
        int m  = items.size();
        for(int i = 0 ; i < qu.size(); i++){
            while(j < m && qu[i].first >= it[j].first){
                mx = max(it[j].second, mx);
                j++;
            }
            queries[qu[i].second] = mx;
        }
        return queries;
    }
};