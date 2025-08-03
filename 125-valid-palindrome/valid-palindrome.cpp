class Solution {
public:
    bool isAlphanumeric(char ch) {
        return (ch >= 'a' && ch <= 'z') ||
               (ch >= 'A' && ch <= 'Z') ||
               (ch >= '0' && ch <= '9');
    }

    bool isPalindrome(string s) {
        int n = s.length();
        int start = 0 ,end = n-1 ;

        while(start < end ){
            if(!isAlphanumeric(s[start])) {
                start++ ;
                continue ;
            }
            if(!isAlphanumeric(s[end])) {
                end-- ;
                continue ;
            }

            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            start++;
            end--;
        }  
        return true;
    }
};