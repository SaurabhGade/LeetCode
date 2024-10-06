class Solution {
public:
    bool isGood(char *buff){
        int i = 0;
        char ex[11];
        while(buff[i] != '\0'){
            char c = buff[i];
            if(c == '4' || c == '7' || c == '3')
                return false;
            switch(c){
                case '2':
                    ex[i] = '5';
                break;
                case '5':
                    ex[i] = '2';
                break;
                case '6':
                    ex[i] = '9';
                break;
                case '9':
                    ex[i] = '6';
                break;
                default:
                    ex[i] = c;
                break;
            }
            i++;
        }
        ex[i] = 0;
        if(strcmp(ex, buff) != 0) return true;
        return false;
    }
    int rotatedDigits(int n) {
        int cnt = 0;
        char buff[11];
        for(int i = 1 ; i <= n ; i++){
            sprintf(buff, "%d", i);
            if(isGood(buff))
                cnt++;
        }
        return cnt;
    }
};