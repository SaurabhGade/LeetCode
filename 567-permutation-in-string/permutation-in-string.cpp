class Solution {
public:
    int hash[26] = {0};
    int org[26] = {0};
    void restore(){
        for(int i = 0; i < 26; i++)
            hash[i] = org[i];
    }
    bool checkInclusion(string s1, string s2) {
        int nn = s1.size();
        int mm = s2.size();
        for(int i = 0 ; i < nn; i++){
            hash[s1[i]%26]++;
            org[s1[i]%26]++;
        }
        for(int i = 0 ; i < mm; i++){
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
                    } if(curr == nn) return true;
                restore();
                x = i-1;
                y = i+1;
                curr = 1;
                hash[s2[i]%26]--;
                    while(y < mm){
                        if(hash[s2[y]%26] > 0){
                            hash[s2[y]%26]--;
                            curr++;
                            y++;
                        } else break;
                        if(curr == nn ) return true;
                    }
                restore();
            }
        }
        return false;
    } 
};