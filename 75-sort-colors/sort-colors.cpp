class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0,hi = nums.size()-1 , mid = 0;
        while (mid <= hi){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[hi]);
                hi--;
            }
            else{
                mid++ ;
            }
        }
    }
};