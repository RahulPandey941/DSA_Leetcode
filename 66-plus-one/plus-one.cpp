class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size()-1;
        int sum = digits[len]+1;
        if(sum<10){
            digits[len] = sum;
            return digits;
        }
        else{
            while(len>=0){
                digits[len] = sum%10;
                int carry = sum/10;

                if(len == 0 ){
                    digits.insert(digits.begin(),carry);
                    break;
                }
                sum = digits[len-1]+carry;
                if(sum < 10){
                    digits[len-1] += carry;
                    break;
                }
                len--;
            }
        }
        return digits;
    
    }
};