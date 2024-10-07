class Solution {
public:
    bool check(string &s, string &g, int k){
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[k%n] != g[i])
                return false;
            k++;
        }
        return true;
    }
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(check(s, goal, i))
                return true;
        }
        return false;
    }
};