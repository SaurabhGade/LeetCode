class Solution {
public:
    int hash[26] = {0};
    int org[26] = {0};

    void restore(){
        for(int i = 0; i < 26; i++)
            hash[i] = org[i];
    }
    bool checkInclusion(string s1, string s2) {
        for(int i = 0 ; i < s1.size(); i++){
            hash[s1[i]%26]++;
            org[s1[i]%26]++;
        }
        for(int i = 0 ; i < s2.size(); i++){
            int curr = 0;
            int x = i-1;
            int y = i+1;
            if(hash[s2[i]%26] > 0){
                curr  = 1;
                hash[s2[i]%26]--;
                    while(x >= 0){
                        if(hash[s2[x]%26] > 0){
                            hash[s2[x]%26]--;
                            x--;
                            curr++;
                        } else break;
                    } if(curr == s1.size()) return true;
                restore();
                x = i-1;
                y = i+1;
                curr = 1;
                hash[s2[i]%26]--;
                    while(y < s2.size()){
                        if(hash[s2[y]%26] > 0){
                            hash[s2[y]%26]--;
                            curr++;
                            y++;
                        } else break;
                        if(curr == s1.size() ) return true;
                    }
                restore();
            }
        }
        return false;
    }
};