class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1} ;
        int n = nums.size();
        int fst = 0;
        int lst = n-1;
        int i,j;
        while(fst <= lst){
            int mid = fst + (lst-fst)/2 ;
            if(nums[mid] == target){
                fst = lst = mid ;
                while( fst >0 && nums[fst-1] == target) fst-- ;
                while( lst+1 <n && nums[lst+1] == target) lst++ ;
                ans[0] = fst;
                ans[1] = lst;
                return {fst,lst};
            }

            else if(nums[mid] > target) lst = mid-1 ;
            else fst = mid+1;
            

        }
        return ans;
    }
};