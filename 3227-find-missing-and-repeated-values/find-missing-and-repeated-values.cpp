class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        vector<int> ans ;
        int n = grid.size();

        unordered_set <int> s;

        int ttl_sum = 0;
        int expected_sum = ((n*n) * ((n*n) + 1))/2 ;
        
        int a,b ;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){

                ttl_sum += grid[i][j] ;

                if(s.find(grid[i][j]) != s.end() ){
                    a = grid[i][j];
                    ans.push_back(a);
                    ttl_sum -= grid[i][j] ;
                }
                else 
                    s.insert(grid[i][j]);
            }
        }
        b = expected_sum - ttl_sum ;
        ans.push_back(b);
        return ans;
    }
};