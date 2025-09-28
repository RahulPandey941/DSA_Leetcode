class Solution {
public:
    bool check(vector<int>& nums) {
        bool isRotated =false;
        int i ;
        for(i = 1 ; i <nums.size(); i++ ){
            if(nums[i]<nums[i-1]) {
                isRotated = true;
                break;
            }
        }
        for(i;i<nums.size()-1; i++){
            if(nums[i] > nums[i+1]) return false; 
        }
       if(isRotated){
            if(nums[0]>= nums[nums.size()-1])  return true;
            return false;
       }
       return true;
        
    }
};