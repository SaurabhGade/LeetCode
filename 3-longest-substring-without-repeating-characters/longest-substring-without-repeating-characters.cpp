class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            unordered_set<char> st;
            for(int j = i; j < n; j++){
                if(st.find(s[j]) != st.end())
                    break;
                st.insert(s[j]);
            }
            if(ans < st.size()) ans = st.size();
        }
        return ans;
    }
};