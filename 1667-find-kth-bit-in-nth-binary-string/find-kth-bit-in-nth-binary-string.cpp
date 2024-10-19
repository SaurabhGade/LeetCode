class Solution {
public:
    void strComp(string &s){
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '1') s[i] = '0';
            else s[i] = '1';
    }
    string getStr(int n){
        if(n <= 1) return "0";
        string k = getStr(n-1);
        string t = k;
        strComp(k);
        reverse(k.begin(), k.end());
        t += "1" + k;
        return t;
    }
    char findKthBit(int n, int k) {
        string s = getStr(n);
        for(int i = 0; i < s.size(); i++){
            if(i == k-1)
                return s[i];
        }
        return 0;
    }
};