class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int i= 0, j = skill.size()-1;
        long long prisum = skill[0] + skill[skill.size()-1];
        long long ans = 0;
        while(i < j){
            long long  a = skill[i];
            long long  b = skill[j];
            if(a+b != prisum)
                return -1;
            else
                ans += a * b;
            i++;j--;
        }
        return ans;
    }
};