class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        vector<string> a1;
        vector<string> a2;
        for(int i = 0 ;i  < s1.size(); i++){
            string t = "";
            while(i < s1.size() && s1[i] != ' '){
                t += s1[i];
                i++;
            }
            a1.push_back(t);
        }
        for(int i = 0 ;i  < s2.size(); i++){
            string t = "";
            while(i < s2.size() && s2[i] != ' '){
                t += s2[i];
                i++;
            }
            a2.push_back(t);
        }
        if(a1.size() < a2.size()) swap(a1, a2);
        int i = 0, j = 0;
        int n = a1.size(), m = a2.size();
        while(i < m && a1[i] == a2[i]) i++;
        while(j < m && a1[n-j-1] == a2[m-j-1]) j++;
        return i+j >= m;

    }
};