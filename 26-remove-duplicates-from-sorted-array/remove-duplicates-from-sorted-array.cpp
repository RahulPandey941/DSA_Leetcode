class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j = 0;

        for(int i = 1 ; i<n ; i++){
            int val = nums[j] ;
            if(nums[i] ==  val) continue;
            nums[++j] = nums[i];
            
        }
        return j+1 ;
    }
};