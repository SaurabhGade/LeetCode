class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int max = 0;
        for(int i = 0 ; i < worker.size() ; i++){
            int curr = 0;
            for(int j = 0 ; j < difficulty.size() ; j++){
                if(worker[i] >= difficulty[j]){
                    if(curr < profit[j]){
                        curr = profit[j];
                    }
                }
            }
            max += curr;
        }
        return max;
    }
};