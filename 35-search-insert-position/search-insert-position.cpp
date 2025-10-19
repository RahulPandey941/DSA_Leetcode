class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int st = 0;
        int end = nums.size()-1;
        int mid;
        while(st<=end){
            if(nums[st] == t) return st;
            if(nums[end]==t) return end;

            mid = st + (end-st)/2;

            if(nums[mid]== t) return mid;
            else if(nums[mid]>t) end= mid-1;
            else st = mid+1;
        }  
        
        if(t>nums[mid])   return mid+1;
        else return mid; 
    }
};