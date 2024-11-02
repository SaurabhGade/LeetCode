class Solution {
public:
    bool isCircularSentence(string s) {
        int n = s.size();
        if(s[0] != s[n-1]) return false;
        for(int i = 0; i < n; i++){
            char prv, srt;
            while(i < n && s[i] != ' '){
                if(s[i] != ' ')
                    prv = s[i];
                i++;
            }
            if(i < n-1 && prv != s[i+1]) return false;
        }
        return true;
    }
};