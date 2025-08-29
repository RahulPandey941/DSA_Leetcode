class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {

        int row = mat.size() - 1;
        int col = mat[0].size() - 1;

        vector <int> result ;

        int stR = 0, endC = col , endR = row , stC = 0;

        while(stR <= endR && stC <= endC){

        // top boundry
            for(int i = stC ; i<= endC ; i++ ){
                result.push_back(mat[stR][i]);
            }
        // right boundry
            for(int i = stR+1 ; i<= endR ; i++ ){
                result.push_back(mat[i][endC]);
            }
        // bottom boundry
            for(int i = endC-1 ; i>= stC ; i-- ){
                if(stR == endR) break;
                result.push_back(mat[endR][i]);
            }
        // left boundry
            for(int i = endR-1 ; i>= stR+1 ; i-- ){
                if(stC == endC ) break;
                result.push_back(mat[i][stC]);
            }

            stR++ ; stC++ ; endR-- ; endC-- ;
        }
        return result;
    }
};