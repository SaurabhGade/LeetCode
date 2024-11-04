class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int n = word.size();
        if(n == 1) {
            comp += to_string(1) + word;
            return comp;
        }
        for(int i = 0; i < n; i++){
            int cnt = 1;
            int j = i+1;
            while(j < n && word[i] == word[j]){
                j++;
                cnt++;
            }
            while(cnt > 9){
                comp += to_string(9) + word[i];
                cnt -= 9;
            }
            if(cnt > 0) comp += to_string(cnt) + word[i];
            i = j-1;
        }
        return comp;
    }
};