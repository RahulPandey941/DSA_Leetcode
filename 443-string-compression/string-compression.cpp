class Solution {
public:
    int compress(vector<char>& chars) {
        int j = 0;
        if(chars.size() == 1) return 1;
        for (int i = 0 ; i < chars.size(); i++){
            
            int count = 0;
            char ch = chars[i] ;
            while(i < chars.size() && ch == chars[i]){
                count++ ;
                i++ ; 
            }
            i-- ; 
            chars[j++] = ch;
            int countlen = log10(count)+1 ;
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    
                    chars[j++] = c;
                }
            }
        }
        return j ;
    }
};