class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size(); stack<int> st;
        for(int i = 0; i < n; i++){
            if(!st.empty() && st.top() == '(' && s[i] == ')')
                st.pop();
            else st.push(s[i]);
        }
        return st.size();
    }
};