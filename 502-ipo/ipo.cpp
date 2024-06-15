class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector< pair<int, int> > vec;
        for(int i = 0 ; i < capital.size() ; i++){
            vec.push_back({capital[i] , profits[i]});
        }
        sort(vec.begin() , vec.end());
        int i = 0;
        priority_queue<int> pq;
        while(k--){
            
            while(i < vec.size() && w >= vec[i].first){
                pq.push(vec[i].second);
                i++;
            }
           if(pq.empty())
           break;
           w += pq.top();
           pq.pop();
        }
        return w;
    }
};