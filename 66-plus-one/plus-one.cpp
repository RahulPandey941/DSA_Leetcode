class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size()-1;
        int carry = 0;
        bool isCarry = true;
        int sum = digits[len]+1;
        
        if(sum>9){
            while(isCarry){
                carry = sum/10;
                digits[len] = sum%10 ;
                if(len==0){
                    digits.insert(digits.begin(), carry);
                    return digits;
                }
                else{
                    sum = digits[len-1]+carry;
                    carry = sum/10;
                    len--;
                    if(sum<10) isCarry = false;
                }
            }
        }
        
            digits[len] = sum;
            return digits;
        
        return digits;
    }
    
};