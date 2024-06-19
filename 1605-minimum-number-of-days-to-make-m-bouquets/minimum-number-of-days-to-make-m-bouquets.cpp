class Solution {
public:
    bool isPossible(vector<int> & bloomDay , int m , int k , int d){
        int cnt  = 0;
        int ms = 0;
        int n = bloomDay.size();
        for(int i = 0 ; i < n ; i++){
            if(bloomDay[i] <= d)
                cnt++;
            else{
                ms += cnt/k;
                cnt = 0;
            }
        }
        ms += cnt/k;
        return (ms>=m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(double (n) <  double (m)*double (k))
            return -1;
       // int ans = INT_MAX;
    
        int min = INT_MAX , max = INT_MIN;
        for(int i = 0 ; i < n ; i++){
           
            if(bloomDay[i] < min)
                min = bloomDay[i];
            if(bloomDay[i] > max)
                max = bloomDay[i];
        }

        while(min <= max){
            int mid = (min + max)/2;
            if(isPossible(bloomDay , m , k , mid)){
                max = mid-1;
            }else
                min = mid+1;
        }
        return min;


       /*   f*cking TLE
        int n = bloomDay.size();
         if(m*k > n)
            return -1;
        unordered_set<int> st(bloomDay.begin() , bloomDay.end());
        int ans = 0;
        priority_queue<int , vector<int> , greater<int> > pq(st.begin() , st.end());
        while(!pq.empty()){
            int cnt = 0;
             ans = pq.top(); pq.pop();
            int ks = 0;
            for(int i = 0 ; i < n  ; i++){
                if(bloomDay[i] - ans <= 0){
                    cnt++;
                }else{
                    ks += cnt/k;
                    cnt = 0;
                    if(ks >= m){
                        return ans;
                    }
                }
            }
            ks += cnt/k;
            if(ks >= m)
                return ans;
        }
        return ans;
        */
        
    }
};