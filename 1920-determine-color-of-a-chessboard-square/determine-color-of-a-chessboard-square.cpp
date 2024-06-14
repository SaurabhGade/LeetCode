class Solution {
public:
    bool squareIsWhite(string s) {
        int r = s[0]-'a'+1; //1=a and 7 = h
        int c = int(s[1])-48;
        if(r % 2 == 0){
            if(c % 2 ==1){
                return true;
            }else{
                return false;
            }
        }
        if(c % 2 == 0){
            return true;
        }
        return false;
    }
};