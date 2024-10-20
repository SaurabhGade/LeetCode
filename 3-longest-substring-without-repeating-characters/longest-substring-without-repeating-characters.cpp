class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int i = 0, j = 0;
        int n = s.size();
        while(i < n){
            j = i;
            unordered_set<char> st;
            while(j < n && st.find(s[j]) == st.end()){
                st.insert(s[j]);
                j++;
            }
            i++;
            ans = max(ans, int(st.size()));
        }
        return ans;
    }
};