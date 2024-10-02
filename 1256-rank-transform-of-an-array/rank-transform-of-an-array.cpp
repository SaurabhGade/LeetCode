class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return {};
        vector<int> ans(arr.size());
        vector<pair<int, int>> pr;
        for(int i = 0 ; i < arr.size() ; i++)
            pr.push_back({arr[i], i});
        sort(pr.begin(), pr.end());
        int rank = 1;
        int prv = pr[0].first;
        for(int i = 0; i < pr.size(); i++){
            rank += (prv == pr[i].first)? 0: 1;
            ans[pr[i].second] = rank;
            prv = pr[i].first;
        }
        return ans;
    }
};