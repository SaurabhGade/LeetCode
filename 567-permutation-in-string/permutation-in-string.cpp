class Solution {
public:
    int hash[256] = {0};
    int org[256] = {0};

    void restore(){
        for(int i = 0; i < 256; i++)
            hash[i] = org[i];
    }
    bool checkInclusion(string s1, string s2) {
        for(int i = 0 ; i < s1.size(); i++){
            hash[s1[i]]++;
            org[s1[i]]++;
        }
        for(int i = 0 ; i < s2.size(); i++){
            int curr = 0;
            int x = i-1;
            int y = i+1;
            if(hash[s2[i]] > 0){
                curr  = 1;
                hash[s2[i]]--;
                    while(x >= 0){
                        if(hash[s2[x]] > 0){
                            hash[s2[x]]--;
                            x--;
                            curr++;
                        } else break;
                    } if(curr == s1.size()) return true;
                restore();
                x = i-1;
                y = i+1;
                curr = 1;
                hash[s2[i]]--;
                    while(y < s2.size()){
                        if(hash[s2[y]] > 0){
                            hash[s2[y]]--;
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