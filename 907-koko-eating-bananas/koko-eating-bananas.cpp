class Solution {
public:
    bool isPossible(vector<int>& piles, int h,
                    long long int m) { // m is rate of eating banana
        long long int time = 0;
        for (int i = 0; i < piles.size(); i++) {
            int k = piles[i] / m;
            time += (piles[i] % m == 0) ? k : k + 1;
        }
        return time <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        unsigned long min = 0;
        unsigned long max = 0;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > max) {
                max = piles[i];
            }
        }
        min = max / h;
        if (min == 0)
            min = 1;
        while (min <= max) {
            long long int mid = (min + max) / 2;
            if (isPossible(piles, h, mid))
                max = mid - 1;
            else
                min = mid + 1;
        }
        return min;
    }
};