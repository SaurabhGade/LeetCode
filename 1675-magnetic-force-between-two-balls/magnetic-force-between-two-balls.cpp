class Solution {
public:
    bool isPossible(vector<int> & position , int m , int d){
        int priv = position[0];
        m-=1;       //because we put first ball on the 0the position;
        for(int i = 1 ; i < position.size() && m > 0 ; i++){
            if(abs(priv-position[i]) >= d){
                m--; priv = position[i];
            }
        }
        return m==0;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin() , position.end());
        if(m <= 2)
            return position[position.size()-1] - position[0];
        int l = 1 , h = position[position.size()-1];
        // for(l ; l <= h ; l++){   ***TLE
        //     if(!isPossible(position, m , l))
        //      break;
        // }
        while(l <= h){
            int mid = (l+h)/2;
            if(isPossible(position , m , mid))
                l = mid+1;
            else
                h = mid-1;
        }
    return l-1;

    }
    
};