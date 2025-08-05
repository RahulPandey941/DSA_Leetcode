class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        string Final = "";
        for(int i = 0 ; i <s.length(); i++){
            string word = "";

            while(s[i] != ' ' && i<s.length()){
                word += s[i];
                i++ ;
            }
            if(word.length()>0){
                reverse(word.begin(), word.end());
                Final += " " + word;
            }
        }
        return Final.substr(1);
    }
};