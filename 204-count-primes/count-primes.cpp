class Solution {
public:
    int countPrimes(int n) {
        int count = -2 ;
        vector <bool> prime (n , true);
        if(n <= 2) return 0;
        
        for(int i = 2 ; i < n ; i++){
            for(int j = i*2 ; j<n ; j += i){
                prime[j] = false;
            }
        }

        for(bool val : prime){
            if(val == true) count++ ;
        }
        return count;
    }
};