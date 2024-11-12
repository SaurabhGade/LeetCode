class Solution {
public:
    list<list<int>> lst;
    void get_ans(int index, vector<int> &nums){
        if(index >= nums.size()-1){
            lst.push_back({nums[index]});
            return;
        }
        get_ans(index+1, nums);
        int n = lst.size();
        for(int i = 0; i < n; i++){
            list<int> t = lst.front();
            lst.pop_front();
            for(int j = 0; j < t.size()+1; j++){
                list<int> temp = t;
                list<int>::iterator it = temp.begin();
                advance(it, j);
                temp.insert(it, nums[index]);
                lst.push_back(temp);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        get_ans(0, nums);
        for(list<int> &i: lst){
            vector<int> k(i.begin(), i.end());
            ans.push_back(k);
        }
        return ans;
    }
};