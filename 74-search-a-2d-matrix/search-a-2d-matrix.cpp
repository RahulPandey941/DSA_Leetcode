class Solution {
public:

    bool srch(vector<vector<int>>& mat, int row , int t){
        int col = mat[0].size()-1;
        int st = 0;
        int end = col;
        while (st<= end){
            int mid = st + (end-st)/2;
            if(mat[row][mid] == t) return true;
            else if(mat[row][mid] < t) st = mid+1 ;
            else end = mid-1;
        }
        return false;
    } 

    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int rows = mat.size()-1;
        int col = mat[0].size()-1;
        
        int st = 0;
        int end = rows;
        while(st <= end){
           int mid = st + (end-st)/2 ;
            if(t>= mat[mid][0] && t<=mat[mid][col]){
                // search in this row
                return srch(mat , mid , t);
            }
            else if(t > mat[mid][col] ){
                st = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return false;
    }
};