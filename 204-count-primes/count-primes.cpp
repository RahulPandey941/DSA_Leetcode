class Solution {
public:
    int countPrimes(int n) {
        int count = 0 ;
        vector <bool> prime (n , true);
        if(n <= 2) return 0;
        
        for(int i = 2 ; i < n ; i++){
            
            if(prime[i]) count++ ;
            else continue;
            for(int j = i*2 ; j<n ; j += i){
                prime[j] = false;
            }
        }

       
        return count;
    }
};