class Solution {
public:

bool check_inner(vector<vector<char>> & board , int m , int n){
  unordered_set<char> us;
  for(int i = m ; i < m+3 ; i++){
    for(int j = n ; j < n+3 ; j++){
      if(board[i][j] != '.'){
        if(us.find(board[i][j]) == us.end())
            us.insert(board[i][j]);
        else
          return false;
      } 
    }
  }
  return true;
}

    bool isValidSudoku(vector<vector<char>>& board) {
  unordered_set<char> us_r;
  unordered_set<char> us_c;

  for(int i= 0 ;i < 9 ; i++){
    int j , k;
    j = k = 0;
    us_r.clear();
    us_c.clear();
    while(j < 9 && k < 9){
      //check row contain unique element.
      if(board[i][j] != '.'){
         if(us_r.find(board[i][j]) == us_r.end())
         us_r.insert(board[i][j]);
         else
         return false;
      }
      //check colum contain unique element.
      if(board[k][i] != '.' ){
        if( us_c.find(board[k][i]) == us_c.end())
        us_c.insert(board[k][i]); 
        else
        return false;
      }
      //check 3x3 grid contain unique elements.
      if(i % 3 == 0 && i < 9){
        if(j % 3 == 0 && j < 9){
           if(!check_inner(board , i , j))
            return false;
        }
        if(k %3 == 0 && k < 9){
          if(!check_inner(board , i , k))
            return false;
        }
      }
      j++;k++;
    }
  }
  return true;
}
};