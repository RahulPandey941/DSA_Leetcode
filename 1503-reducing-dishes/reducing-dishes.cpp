class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin() , satisfaction.end());
        int size = satisfaction.size();
        int maxSum = 0;
        for(int i = size-1; i>= 0 ; i--){
            int sum = 0;
            int counter = 1;
            for(int j = i; j<size;j++){
                sum += satisfaction[j] * counter++ ;
            }
            if(sum>maxSum) maxSum =sum;
            else break;
        }
        return maxSum;
    }
};