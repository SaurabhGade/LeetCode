class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int , int> > vec;
        for(int i = 0 ; i < profit.size() ; i++)
            vec.push_back({difficulty[i] , profit[i]});
        sort(vec.begin() , vec.end());
        int max = 0;
        for(int i = 0 ; i < vec.size() ; i++){
            if(max > vec[i].second)
                vec[i].second = max;
            else
                max = vec[i].second;
        }
        max = 0;
        int j = 0;
        int mxp = 0;
        sort(worker.begin() , worker.end());
        for(int i = 0 ; i < worker.size() ; i++){
           while (j < vec.size() && worker[i] >= vec[j].first){
            max = vec[j].second;
            j++;
           }
            mxp += max;
        }
        return mxp;
    }
};