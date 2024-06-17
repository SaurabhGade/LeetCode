class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int l[h.size()];
        int r[h.size()];
        int i = 0 , j = h.size()-1;
        int max = 0;
        stack<int> stl , str;
        while(i < h.size() && j >= 0){
            if(stl.empty()){
                l[i] = -1;
                stl.push(0);
            }else{
                while(!stl.empty() && h[stl.top()] >= h[i])
                    stl.pop();
                if(!stl.empty())
                    l[i] = stl.top();
                else
                    l[i] = -1;
                stl.push(i);
            }
            if(str.empty()){
                r[j] = h.size();
                str.push(h.size()-1);
            }
            else{
                while(!str.empty() && h[str.top()] >= h[j])
                    str.pop();
                if(!str.empty()){
                    r[j] = str.top();
                }
                else
                    r[j] = h.size();
                str.push(j);
            }
            i++;
            j--;
        }
        for(int i = 0 ; i < h.size() ; i++){
            int curr = abs(h[i] * (r[i]-l[i]-1));
            if(curr > max)
                max = curr;
        }
    return max;


        /*      ///SUFFERING FROM TLE
        int max = 0;
        for(int i = 0 ; i < h.size() ; i++){
            int l = i-1;
            int r = i+1;
            int curr;
            int ch = h[i];
            while(l >= 0 && h[i] <= h[l])
                l--;
            while(r < h.size() && h[i] <= h[r]){
                r++;
            }
            //curr = abs(((ch*(i-l)) + (ch*(r-i)))-ch);
            curr = abs(ch*(r-l-1));
            if(max < curr)
                max =curr;
        }
        return max;
        */
    }
};
