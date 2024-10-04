class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        priority_queue<int> p;
        priority_queue<int, vector<int> , greater<int> > q;
        for(int i = 0 ; i < skill.size(); i++){
            p.push(skill[i]);
            q.push(skill[i]);
        }
        long long ans = 0;
        bool flag = true;
        long long prisum;
        int i = 0;
        while(i < skill.size()/2){
            long long a,b;
            a = p.top(); p.pop();
            b = q.top(); q.pop();
            if(flag){
                prisum = a+b;
                ans = a*b;
                i++;
                flag = false;
                continue;
            }
            if(a+b != prisum)
                return -1;
            ans += a*b;
            i++;
        }
        return ans;
    }
};