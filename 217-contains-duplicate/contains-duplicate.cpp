class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        int val;
        unordered_map <int , int> s;

        for(int i= 0 ; i<n ; i++ ){
            val = nums[i];
            s[val]++ ; 
            if(s[val] == 2) return true;
        }
        return false;
    }
};