class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map <int,int> m;

        for(int i = 0 ; i < nums.size() ; i++){
            
            int srch = t- nums[i] ;

            if(m.find(srch) != m.end()) return {m[srch],i};
            
            m[nums[i]] = i ;
        }

        return {};
    }
};