class Solution {
public:
    bool isPossible(vector<int> & piles , int h , unsigned long k){
        unsigned long time = 0;
        for(int i = 0 ; i < piles.size() ; i++){
            unsigned long t = piles[i]/k;
            time += (piles[i]%k)?t+1:t;
        }
        return time <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        /// TLE use binary search.
        // int k = 1;
        // while(!isPossible(piles , h , k))
        //     k++;
        // return k;
        unsigned long min  = 0;
        unsigned long max = 0;
        for(int i = 0 ; i < piles.size() ; i++)
                max += piles[i];
        
        min = max/h; if(min <= 0) min = 1;
        while(min <= max){
            unsigned long mid = (min+max)/2;
            if(isPossible(piles, h , mid)){
                max = mid-1;
            }else{
                min = mid+1;
            }
        }
        return min;
    }
};