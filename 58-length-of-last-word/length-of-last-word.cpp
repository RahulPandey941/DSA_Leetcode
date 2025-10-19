class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int size = s.size()-1;
        while(s[size] == ' ') {
            size--;
            continue;
        }
        while(size >=0 && s[size] != ' '){
            len++ ;
            size--;
        }
        return len;
    }
};