class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int row = mat.size() - 1;
        int col = mat[0].size() - 1;

        if(mat[0][0] == t) return true;
        else if(mat[row][col] == t) return true;
        
        int stRow = 0;
        int stCol = col;
        while(stRow <= row && stCol >= 0){

            int mid = mat[stRow][stCol] ;

            if(mid == t ) return true;
            else if(mid > t) stCol-- ;
            else stRow++ ;
        }

        return false;

    }
};