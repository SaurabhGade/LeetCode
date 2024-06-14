class Solution {
public:
    int trap(vector<int>& h) {
        int l = 0 , r = h.size()-1;
        int lm = 0 , rm = 0;
        int water  = 0 , curr = 0;
        while(l < r){
            if(h[l] <= h[r]){
                curr =  lm - h[l];
                curr = (curr < 0)?0:curr;
                if(lm < h[l]){
                    lm = h[l];
                }
                l++;
            }else{
                curr = rm - h[r];
                curr = (curr < 0)?0:curr;
                if(rm < h[r]){
                    rm  = h[r];
                }
                r--;
            }
            water += curr;
        }
        return water;
    }
};