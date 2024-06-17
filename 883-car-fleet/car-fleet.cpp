class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int ans = position.size();
        vector< pair<int,int> > vec;
        for(int i = 0 ; i < position.size() ; i++)
            vec.push_back({position[i],speed[i]});
        sort(vec.begin() , vec.end() , greater<pair<int,int> > ());
            float time = float(target-vec[0].first)/float(vec[0].second);
        for(int i = 1 ; i < position.size() ; i++){
            float ctime = float(target-vec[i].first)/float(vec[i].second);
            if(ctime > time){
                time = ctime;
            }else{
                ans--;
            }
        }
        return ans;
        
    }
};