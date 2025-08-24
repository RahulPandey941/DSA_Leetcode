class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maxvictories = 0;
        int currentWinner = arr[0];
        

        for(int i = 1 ; i < arr.size(); i++){
            if(arr[i]<currentWinner) maxvictories++ ;
            else {
                maxvictories = 1;
                 currentWinner = arr[i];
            }

            if(maxvictories == k) return currentWinner;
        }

        return currentWinner;
    }
};   

// [1,2,3,4,5,5,6]