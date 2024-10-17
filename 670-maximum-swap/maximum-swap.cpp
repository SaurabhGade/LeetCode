class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            int k = 0;
            for(int j = i+1; j < s.size(); j++){
                if(c <= s[j]){
                    c = s[j];
                    k = j;
                }
            }
            if(c != s[i]){
                c = s[i];
                s[i] = s[k];
                s[k] = c;
                break;
            }
        }
        return stoi(s);
    }
};