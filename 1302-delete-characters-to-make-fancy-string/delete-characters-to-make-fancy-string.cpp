class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        char ch = s[0];
        int cnt = 1;
        int n = s.size();
        ans += ch;
        for(int i = 1; i < n; i++){
            if(s[i] == ch) cnt++;
            else { 
                cnt = 1; 
                ch = s[i];
            }
            if(cnt <= 2) ans += s[i];
        }
        return ans;
    }
};