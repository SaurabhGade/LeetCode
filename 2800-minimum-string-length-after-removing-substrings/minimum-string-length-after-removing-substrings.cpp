class Solution {
public:
    string remove(string s){
         string k = "";
        for(int i = 0; i  < s.size(); i++){
            if(s[i] == 'A' && s[i+1] == 'B')
                i++;
            else if(s[i] == 'C' && s[i+1] == 'D')
                i++;
            else k += s[i];
        }
        return k;
    }
    int minLength(string s) {
        int ans = s.length();
        while(true){
            string k = remove(s);
            if(k.size() == s.size())
                return k.size();
            s = k;
        }
    }
};