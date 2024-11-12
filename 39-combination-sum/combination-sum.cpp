class Solution {
public:
    vector<vector<int>> ans;
    vector<int> stackToVec(stack<int> st){
        vector<int> vec;
        while(!st.empty()){
            vec.push_back(st.top());
            st.pop();
        }
        return vec;
    }
    void combSum(int index, int target, vector<int> &cand, stack<int> &st){
        if(index >= cand.size()){
            st.pop();
            return;
        }
        if(target < 0){
            st.pop();
            return;
        }
        if(target == 0){
            vector<int> t = stackToVec(st);
            if(!t.empty()) ans.push_back(t);
            if(!st.empty()) st.pop();
            return;
        }
        //pick an element;
        st.push(cand[index]);
        combSum(index, target-st.top(), cand, st);
        //Not pick;
        combSum(index+1, target,cand, st);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        stack<int> st;
        combSum(0, target, candidates, st);
        return ans;
    }
};