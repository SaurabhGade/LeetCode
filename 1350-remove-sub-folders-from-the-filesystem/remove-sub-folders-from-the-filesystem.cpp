class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string> st(folder.begin(), folder.end());
        vector<string> ans;
        for(string curr: folder){
            bool isSubF = false;
            string temp = curr;
            while(!curr.empty()){
                size_t pos = curr.find_last_of('/');
                curr = curr.substr(0, pos);
                if(st.find(curr) != st.end()){
                    // is a sub folder;
                    isSubF = true;
                    break;
                }
            }
            if(!isSubF) ans.push_back(temp);
        }
        return ans;
    }
};