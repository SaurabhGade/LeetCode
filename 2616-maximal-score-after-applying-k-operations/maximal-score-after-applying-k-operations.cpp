class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        priority_queue<int> pq;
        for(int i = 0; i < nums.size(); i++)
            pq.push(nums[i]);
        while(!pq.empty() && k){
            int t  = pq.top(); pq.pop();
            score += t;
            t = (t % 3)? (t/3)+1: t/3;
            pq.push(t);
            k--;
        }
        return score;
    }
};