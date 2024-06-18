class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int aux[256];
        int max = 0;
        for(int i = 0 ; i < 256 ; i++)
            aux[i]=-1;
        for(r = 0 ; r < s.size() ; r++){
            if(aux[s[r]] != -1){
                if(aux[s[r]] >= l){
                    l = aux[s[r]]+1;
                }
            }
            aux[s[r]] = r;
            int curr = r-l+1;
            if(curr > max)
                max=curr;
        }
        return max;
        
    }
};