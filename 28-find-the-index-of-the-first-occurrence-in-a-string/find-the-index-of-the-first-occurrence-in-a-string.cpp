class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        for(int i = 0 ; i < n ; i++){
            int j = 0;
            int k = i;
            while(haystack[k] == needle[j] && j < needle.size() && k < n){
                j++; k++;
            }
            if(j == needle.size())
                return i;
        }
        return -1;
    }
};