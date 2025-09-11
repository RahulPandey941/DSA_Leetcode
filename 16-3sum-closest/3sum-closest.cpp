class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int n = nums.size();
        int closest = INT_MAX ;
        int ans ;
        sort(nums.begin(),nums.end());

        for(int i = 0 ; i < n-2 ; i++){

            int fst = i+1; int lst = n-1;
            while(fst < lst){
                int sum = nums[i] + nums[fst] + nums[lst] ;
                
                if(sum == t) return sum;
                
                    if(closest > abs(t-sum)){
                        ans = sum;
                        closest =abs(t-sum);
                    }
                

                if(sum > t) lst-- ;
                else fst++;
                
            }
        }
        return ans;
    }
};