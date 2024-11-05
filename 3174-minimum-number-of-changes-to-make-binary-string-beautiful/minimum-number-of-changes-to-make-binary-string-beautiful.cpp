class Solution {
public:
    int minChanges(string str) {
        int n  = str.size();
        int s  = 0, f = 0;
        int swp = 0;
        while(f < n){
            if(str[s] == str[f])
                f++;
            else{
                if(f % 2 == 1){     // even postion (1 positoining).
                    swp++; f++;
                }
                s = f;
            }
        }
        return swp;
    }
};